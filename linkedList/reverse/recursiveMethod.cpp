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
    Node *insert(Node *head, int val);
    void print(Node *ptr);
    void revPrint(Node *ptr);
};

Node *linkedList::insert(Node *head, int val)
{
    Node *temp = new Node(val);

    if (head == NULL)
        head = temp;
    else
    {
        Node *ptr = head;
        while (ptr->next != NULL)
            ptr = ptr->next;
        ptr->next = temp;
    }
    return head;
}

void linkedList::print(Node *ptr)
{
    if (ptr == NULL)
    {
        cout << endl;
        return;
    }

    cout << ptr->data << " ";
    print(ptr->next);
}
void linkedList::revPrint(Node *ptr)
{
    if (ptr == NULL)
    {
        cout << endl;
        return;
    }
    revPrint(ptr->next);

    cout << ptr->data << " ";
}

int main()
{
    linkedList list;
    Node *ref = list.head;
    int n, x;
    cout << "How many numbers you want to insert: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter #" << i << ": ";
        cin >> x;
        ref = list.insert(ref, x);
        list.print(ref);
    }
    cout << endl;
    cout << "Reverse List: ";
    list.revPrint(ref);
}