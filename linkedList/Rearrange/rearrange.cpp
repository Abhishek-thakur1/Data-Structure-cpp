/* Given a singly linked list, the task is to rearrange it in a way that all odd position nodes are together and all even positions node are together.Assume the first element to be at position 1 followed by second element at position 2 and so on.  */

// Input :
// LinkedList : 1->2->3->4
// Output : 1 3 2 4
// Explanation : Odd elements are 1, 3 and even elements are 2, 4. Hence, resultant linked list is 1->3->2->4.

/* Input:
LinkedList: 1->2->3->4->5
Output: 1 3 5 2 4
Explanation:
Odd elements are 1, 3, 5 and even elements are
2, 4. Hence, resultant linked list is
â€‹1->3->5->2->4. */

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
    Node *rearrange(Node *head);
    void print(Node *ptr);
};

// for rearranging...
Node *linkedList::rearrange(Node *head)
{
    Node *link = head->next;
    Node *odd = head, *even = head->next;
    while (even && even->next)
    {
        odd->next = odd->next->next;
        even->next = even->next->next;
        odd = odd->next;
        even = even->next;
    }
    odd->next = link;
    return head;
}

// for insertion...
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

// for printing...
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
    ref = list.rearrange(ref);
    cout << "Rearranged List: ";
    list.print(ref);
}