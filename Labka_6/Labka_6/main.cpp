#include <iostream>
#include <conio.h>
#include "graph.h"



using namespace std;



char input, choo, kk;





int main()

{

setlocale(LC_ALL, "ukr");

do

{

system("cls");

cout << "Введіть програму" << endl;
cout << "1. Пошук в глибину (без реалізації рекурсії) :" << endl;
cout << "2. Пошук в глибину (з рекурсивною реалізацією) : " << endl;
cout << "3. Пошук вшир :" << endl;
cin >> choo;

if (choo == '1')

{

system("cls");
cout << "Пошук в глибину (без реалізації рекурсії)" << endl << endl;
graph_dfs_no_rec(1);

}

else

if (choo == '2')

{

system("cls");
cout << "Пошук в глибину (з рекурсивною реалізацією)" << endl << endl;
graph_dfs_no_rec(1);
graph_dfs_rec(1);



}

else

if (choo == '3')

{
system("cls");
cout << "Пошук вшир" << endl << endl;
graph_bfs_no_rec(1);
}

cout << ".";
cin >> kk;

} while (kk == 'y');

}
