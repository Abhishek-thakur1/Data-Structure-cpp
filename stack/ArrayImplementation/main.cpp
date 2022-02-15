#include <iostream>
using namespace std;
#define MAX_SIZE 101

class Stack
{
private:
    int A[MAX_SIZE];
    int top;

public:
    Stack() : top(-1){};

    // for pushing elements to the top of stack.....
    void push(int x)
    {
        if (top == MAX_SIZE - 1)
        {
            cout << "ERROR: Stack overflow!" << endl;
            return;
        }
        A[++top] = x;
    }

    // for deleting element from top...
    void pop()
    {
        if (top == -1)
        {
            cout << "ERROR: Stack is empty!" << endl;
            return;
        }
        top--;
    }

    // to return the element at top of stack....
    int Top()
    {
        return A[top];
    }

    // to check if the stack is empty....
    int isEmpty()
    {
        if (top == -1)
            return 0;
        return 1;
    }

    // print..
    void print()
    {
        cout << "Stack: ";
        for (int i = 1; i <= top; i++)
            cout << A[i] << " ";
        cout << endl;
    }
};

int main()
{
    Stack S;
    S.push(2);
    S.print();
    S.push(5);
    S.print();
    S.push(10);
    S.print();
    S.pop();
    S.print();
    S.push(12);
    S.print();
}
