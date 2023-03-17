#pragma once
#ifndef LIST_H
#define LIST_H
#endif
#include <iostream>
using namespace std;
typedef int datatype;
struct Node
{
	datatype data;
	Node* next;
};
class List {
	Node* head = NULL;
public:
	void push(datatype data);
	datatype pop();
	void show();
};
