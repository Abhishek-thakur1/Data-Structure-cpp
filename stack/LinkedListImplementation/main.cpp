#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val) : data(val), next(NULL){};
};

class Stack
{
public:
    Node *top;
    Stack() : top(NULL){};

    void Push(int x)
    {
        Node *temp = new Node(x);
        temp->next = top;
        top = temp;
    }

    void Pop()
    {
        Node *temp;
        if (top == NULL)
            return;
        temp = top;
        top = top->next;
        delete temp;
    }

    void Print()
    {
        Node *ptr = top;
        cout << "Stack: ";
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
};

int main()
{
    Stack S;
    S.Push(2);
    S.Print();
    S.Push(5);
    S.Print();
    S.Push(10);
    S.Print();
    S.Pop();
    S.Print();
    S.Push(12);
    S.Print();
}