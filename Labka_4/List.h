#ifndef LIST_H_INCLUDED

#define LIST_H_INCLUDED

#include <iostream>



using namespace std;



typedef int datatype;



struct Node

{

    datatype key;

    Node* next;

    Node* prev;

};







class List

{

    Node* front, * end;

public:

    List() { front = NULL; end = NULL; }

    ~List() {};

    void push(datatype data);

    datatype pop();

    bool stackempty();

    void show();

};



class Queue

{

    Node* front, * rear;

public:

    Queue() { front = NULL; rear = NULL; }

    ~Queue() {};

    bool queueempty();

    void enqueue(datatype data);

    void show();

    datatype dequeue();

};



class TwoList

{

    Node* first, * last;

public:

    TwoList() { first = NULL; last = NULL; }

    ~TwoList() {};

    bool stackkempty();

    void show();

    void add_begin(datatype data);

    void add_end(datatype data);

    datatype del_begin();

    datatype del_end();

    Node* search(datatype data);

    void add_mid(datatype keyy, datatype data);

    datatype del_mid(datatype data);

};



#endif // LIST_H_INCLUDED
