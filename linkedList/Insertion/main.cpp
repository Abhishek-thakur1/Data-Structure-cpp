#include <iostream>
#include "class.cpp"

using namespace std;

int main()
{
    LinkedList list;
    int choice;

    cout << "------ Insertion of data in a linked list ---------" << endl;
    cout << "----- Where you want to insert data, choose one of the following: ---------" << endl;
    cout << " 1) Insertion At Beginning-" << endl;
    cout << " 2) Insertion At End-" << endl;
    cout << " 3) Insertion At Any Position-" << endl;
    cout << "________________________________" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        int n, x;
        cout << "So, you choose insertion at the beginning..." << endl;
        cout << "Enter how many times you want to insert: " << endl;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cout << "Enter #" << i << ": ";
            cin >> x;
            list.insertAtBegin(x);
            list.print();
        }
        break;

    case 2:
        int a, b;
        cout << "So, you choose insertion at the end..." << endl;
        cout << "Enter how many times you want to insert: " << endl;
        cin >> a;
        for (int i = 1; i <= a; i++)
        {
            cout << "Enter #" << i << ": ";
            cin >> b;
            list.insertAtEnd(b);
            list.print();
        }
        break;

    case 3:
        int c, d, pos;
        cout << "So, you choose insertion at any position..." << endl;
        cout << "Enter how many times you want to insert: " << endl;
        cin >> c;
        for (int i = 1; i <= c; i++)
        {
            cout << "Enter #" << i << ": ";
            cin >> d;
            cout << "Enter VALID position at which number to be entered: ";
            cin >> pos;
            list.insertAtPos(pos, d);
            list.print();
        }
        break;
    }
}