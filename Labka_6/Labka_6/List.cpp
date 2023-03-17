#include <iostream>
#include "list.h"
#define NULL 0

typedef int datatype;



using namespace std;



struct Item

{
datatype data;
Item* next;

};



Item* head = NULL, * front = NULL, * rear = NULL, * temp = NULL;



void recreate_stack() {
temp = NULL;
head = NULL;

}

void recreate_queue() {
temp = NULL;
front = NULL;
rear = NULL;

}

void add_stack(datatype data) {
Item* temp = new Item;
temp->data = data;
temp->next = head;
head = temp;

}

void del_stack() {
if (head == NULL) {
cout << "\nYour stack empty" << endl;
return;

}

else {

Item* temp = head;
head = temp->next;
delete temp;

}

}

datatype show_stack() {

return head->data;

}

datatype give_stack() {
datatype element;
Item* temp = head;
element = temp->data;
head = temp->next;
delete temp;
return element;

}

void show_full_stack() {
Item* temp = head;
while (temp != NULL) {
cout << temp->data << " ";
temp = temp->next;

}

cout << endl;

}

int size_stack() {
int i = 0;
Item* temp = head;
while (temp != NULL) {
i++;
temp = temp->next;

}

return i;

}

void add_queue(datatype data) {

Item* temp = new Item;
temp->data = data;
temp->next = NULL;
if (front == NULL) front = temp;
else rear->next = temp;
rear = temp;

}

void del_queue() {

if (front == NULL) {
cout << "\nYour queue empty" << endl;
return;

}

else {

Item* temp = front;
front = temp->next;
delete temp;

}

}

datatype show_queue() {
return front->data;

}

void show_full_queue() {
Item* temp = front;
while (temp != NULL) {
cout << temp->data << " ";
temp = temp->next;

}

cout << endl;

}

int size_queue() {

int i = 0;
Item* temp = front;
while (temp != NULL) {

i++;
temp = temp->next;

}

return i;

}
