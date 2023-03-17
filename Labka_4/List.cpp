#include "list.h"

void List::push(datatype data)

{

    Node* temp = new Node;

    temp->key = data;

    temp->next = front;

    front = temp;

}



datatype List::pop()

{

    datatype result = -1;

    if (stackempty())

    {

        cout << "Stack is empty" << endl;

    }

    else

    {

        Node* temp = front;

        front = temp->next;

        result = temp->key;

        delete temp;

    }

    return result;

}



bool List::stackempty()

{

    if (front == NULL) return true;

    else return false;

}



void List::show()

{

    Node* temp = front;

    while (temp != NULL)

    {

        cout << temp->key << " ";

        temp = temp->next;

    }

    cout << endl;

}

bool Queue::queueempty()

{



    if (front == NULL) return true;

    else return false;

}

void Queue::show()

{

    Node* temp = front;

    while (temp != NULL)

    {

        cout << temp->key << " ";

        temp = temp->next;

    }

    cout << endl;

}

void Queue::enqueue(datatype data)

{

    Node* temp = new Node;

    temp->key = data;

    temp->next = NULL;

    if (queueempty())

    {

        front = temp;

    }

    else

    {

        rear->next = temp;

    }

    rear = temp;

}

datatype Queue::dequeue()

{

    datatype result = -1;

    if (queueempty())

    {

        cout << "Queue is empty" << endl;

    }

    else

    {

        Node* temp = front;

        front = temp->next;

        result = temp->key;

        delete temp;

    }

    return result;

}





void TwoList::show()

{

    Node* temp = first;

    while (temp != NULL)

    {

        cout << temp->key << " ";

        temp = temp->next;

    }

    cout << endl;

}

void TwoList::add_begin(datatype data)

{

    Node* temp = new Node;

    temp->key = data;

    temp->next = first;

    temp->prev = NULL;

    if (first != NULL) {

        first->prev = temp;

    }

    else {

        last = temp;

    }

    first = temp;

}

void TwoList::add_end(datatype data)

{

    Node* temp = new Node;

    temp->key = data;

    temp->next = NULL;

    temp->prev = last;

    if (first != NULL) {

        last->next = temp;

    }

    else {

        first = temp;

    }

    last = temp;

}

datatype TwoList::del_begin()

{

    datatype result = -1;

    if (first == NULL)

    {

        cout << "Stack is empty" << endl;

    }

    else

    {

        Node* temp = first;

        first = temp->next;

        if (temp->next != NULL) {

            first->prev = NULL;

        }

        else {

            last = NULL;

        }

        result = temp->key;



        delete temp;

    }

    return result;

}

datatype TwoList::del_end()

{

    datatype result = -1;

    if (last == NULL)

    {

        cout << "Stack is empty" << endl;

    }

    else

    {

        Node* temp = last;

        last = temp->prev;

        if (temp->prev != NULL) {

            last->next = NULL;

        }

        else {

            first = NULL;

        }

        result = temp->key;

        delete temp;

    }

    return result;

}

Node* TwoList::search(datatype data)

{

    bool a = false;

    Node* temp = first;

    while (temp != NULL) {

        if (temp->key == data) {

            return temp;

            a = true;

            break;

        }

        else temp = temp->next;

    }

    if (!a) {

        cout << "No this data in steck" << endl;

        return NULL;

    }

}

void TwoList::add_mid(datatype keyy, datatype data)

{

    if (search(keyy) == NULL) {

        cout << "ERROR" << endl;

    }

    if (search(keyy)->next == NULL) {

        add_end(data);

    }

    else {

        Node* pkey = search(keyy);

        Node* temp = new Node;

        temp->key = data;

        temp->next = pkey->next;

        temp->prev = pkey;

        pkey->next = temp;

        (temp->next)->prev = temp;

    }

}

datatype TwoList::del_mid(datatype data)

{

    datatype result = -1;

    if (search(data) == NULL) {

        cout << "ERROR" << endl;

    }

    else if (search(data) == first) {

        del_begin();

    }

    else if (search(data) == last) {

        del_end();

    }

    else {

        Node* pkey = search(data);

        (pkey->prev)->next = pkey->next;

        (pkey->next)->prev = pkey->prev;

        result = pkey->key;

        delete pkey;

        return result;

    }

}
