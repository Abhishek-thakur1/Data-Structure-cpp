#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val) : data(val), next(NULL) {}
};

class LinkedList
{
public:
    Node *head;
    LinkedList() : head(NULL){};
    void insertAtBegin(int val);
    void insertAtEnd(int val);
    void insertAtPos(int pos, int val);
    void print();
};

// Insertion at beginning...
void LinkedList::insertAtBegin(int val)
{
    Node *temp = new Node(val);
    temp->next = this->head;
    this->head = temp;
}

// Insertion at End...
void LinkedList::insertAtEnd(int val)
{
    Node *temp = new Node(val);
    Node *ptr = this->head;
    if (head == NULL)
    {
        insertAtBegin(val);
        // this->head = temp;
        return;
    }
    while (ptr != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
}

// Insertion at any position...
void LinkedList::insertAtPos(int pos, int val)
{
    Node *temp = new Node(val);
    if (pos == 1)
    {
        temp->next = this->head;
        this->head = temp;
        return;
    }
    pos--;
    Node *ptr = this->head;
    while (ptr != NULL && pos--)
    {
        ptr = ptr->next;
    }
    if (ptr == NULL)
        return;
    temp->next = ptr->next;
    ptr->next = temp;
}

// Printing the list...
void LinkedList::print()
{
    Node *ptr = this->head;
    while (ptr != NULL)
    {
        cout << "List: " << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}