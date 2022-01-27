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
    linkedList() : head(NULL){};
    Node *insert(Node *head, int val);
    Node *rotate(Node *head, int k);
    void print(Node *ptr);
};

// insert...
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

// rotation.....
Node *linkedList::rotate(Node *head, int k)
{
    if (k == 0)
        return head;

    Node *temp = head, *temp1 = head, *temp3 = NULL;
    int c = 1;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = head;
    while (c != k)
    {
        c++;
        temp1 = temp1->next;
    }
    temp3 = temp1->next;
    temp1->next = 0;
    return temp3;
}

// printing....
void linkedList::print(Node *ptr)
{
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
    Node *ref = list.head;
    int n, x, k;
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
    cout << "Enter how many times you want to rotate the list: ";
    cin >> k;
    ref = list.rotate(ref, k);
    cout << "After rotating " << k << " times: ";
    list.print(ref);
}