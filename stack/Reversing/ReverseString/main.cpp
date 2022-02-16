#include<iostream>
#include<stack>
#include <string.h>
using namespace std;

void Reverse(char c[], int n){
    stack<char> S;
    for(int i = 0; i < n; i++)
        S.push(c[i]);

        for(int i = 0; i < n; i++) {
            c[i] = S.top();
            S.pop();
        }
}

int main(){
    char C[101];
    cout << "Enter A String: ";
    gets(C);
    Reverse(C, strlen(C));
    cout << "Reversed String: " << C;
}