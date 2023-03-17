#include <iostream>
#include <string>
#include "graph.h"
#include "list.h"



using namespace std;



int Graph[8][8] = {



/*1*/{0,1,1,1,0,0,1,1},

/*2*/{1,0,0,0,0,0,1,1},

/*3*/{1,0,0,0,0,0,0,0},

/*4*/{1,0,0,0,1,1,0,0},

/*5*/{0,0,0,1,0,1,0,0},

/*6*/{0,0,0,1,1,0,0,0},

/*7*/{1,1,0,0,0,0,0,1},

/*8*/{1,1,0,0,0,0,1,0},

};



bool visited[8];

int dfsnumber[8], dfs = 1, test = 0, a, b;

string karkas[8];



void graph_dfs_no_rec(int start) {

bool visited[8] = { false, false, false, false, false, false, false, false }, the_end = false, check;

int dfsnumber[8], dfs = 1;

visited[start - 1] = true;

dfsnumber[start - 1] = dfs;

add_stack(start);

//cout << "----------------------------" << endl;

cout << " Vershina | DFS-nomer | vmist " << endl;

cout << "------------------------------" << endl;

cout << "  " << show_stack() << "       |  " << dfsnumber[0] << "        |  ";;

show_full_stack();

while (the_end == false) {

check = true;

for (int i = 0; i < 8; i++) {

if (Graph[show_stack() - 1][i] == 1 && visited[i] == false) {

visited[i] = true;

dfsnumber[i] = ++dfs;

add_stack(i + 1);

check = false;

cout << "---------------------------" << endl;

cout << "  " << show_stack() << "       |  " << dfsnumber[show_stack() - 1] << "        |  ";;

show_full_stack();

a = give_stack();

b = give_stack();

karkas[test++] = to_string(b) + " -> " + to_string(a);

add_stack(b);

add_stack(a);

break;

}

}

if (check == true) {

del_stack();

//cout << "---------------------------" << endl;

cout << "          |           |  ";

show_full_stack();

if (size_stack() == 0) the_end = true;

}

}



}

void recursion(int vertex) {



visited[vertex - 1] = true;

dfsnumber[vertex - 1] = dfs++;

for (int i = 0; i < 8; i++) {

if (Graph[vertex - 1][i] == 1 && visited[i] == false) {

karkas[test++] = to_string(vertex) + " -> " + to_string(i + 1);

recursion(i + 1);

}

}

return;

}

void graph_dfs_rec(int vertex) {

dfs = 1;

recursion(vertex);

//cout << "-----------" << endl;

cout << " top | DFS " << endl;

for (int i = 0; i < 8; i++) {

//cout << "-----------" << endl;

cout << "  " << i + 1 << "  |  " << dfsnumber[i] << endl;

}

//cout << "-----------" << endl;



}

void graph_bfs_no_rec(int start) {

bool visited[8] = { false, false, false, false, false, false, false, false }, the_end = false, check;

int bfsnumber[8], bfs = 1;

visited[start - 1] = true;

bfsnumber[start - 1] = bfs;

add_queue(start);

//cout << "---------------------------" << endl;

cout << " Vershina | BFS | vmist " << endl;

//cout << "--------------------------" << endl;

cout << "  " << show_queue() << "       |  " << bfsnumber[start - 1] << "  |  ";;

show_full_queue();

while (the_end == false) {

check = true;

for (int i = 0; i < 8; i++) {

if (Graph[show_queue() - 1][i] == 1 && visited[i] == false) {

visited[i] = true;

karkas[test++] = to_string(show_queue()) + " -> " + to_string(i + 1);

bfsnumber[i] = ++bfs;

add_queue(i + 1);

check = false;

//cout << "---------------------------" << endl;

cout << "  " << i + 1 << "       |  " << bfsnumber[i] << "  |  ";

show_full_queue();

break;

}

}

if (check == true) {

del_queue();

//cout << "---------------------------" << endl;

cout << "          |     |  ";

show_full_queue();

if (size_queue() == 0) the_end = true;

}

}

}
