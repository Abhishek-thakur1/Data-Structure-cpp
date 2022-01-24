#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val) : data(val), next(NULL) {}
};

class linkedList
{
public:
    Node *head;
    linkedList() : head(NULL) {}
    void insertion(int val);
    void reverse();
    void print();
};

// for reversing .............
void linkedList::reverse()
{
    Node *curr = head, *prev = NULL, *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

// fir inserting data into the list..
void linkedList ::insertion(int val)
{
    Node *temp = new Node(val);
    Node *ptr = this->head;
    if (head == NULL)
    {
        this->head = temp;
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
}

// printing the list...
void linkedList ::print()
{
    Node *ptr = this->head;
    cout << "List: ";
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main()
{
    linkedList list;
    int n, x;
    cout << "How many numbers you want to insert: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter #" << i << ": ";
        cin >> x;
        list.insertion(x);
        list.print();
    }
    cout << endl;
    cout << "Reverse ";
    list.reverse();
    list.print();
}