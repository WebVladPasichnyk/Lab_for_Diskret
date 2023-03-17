#include "List.h"

void List::push(datatype data) {
	Node* temp = new Node;
	temp->data = data;
	temp->next = head;
	head = temp;
}

datatype List::pop() {
	if (!head)
		return -1;
	Node* temp = head;
	head = temp->next;
	datatype result = temp->data;
	delete temp;
	return result;
}

void List::show() {
	datatype data = pop();
	cout << "Пройдений шлях: " << data;
	while ((data = pop()) != -1)
		cout << " -> "  << data ;
	cout << endl;
}
