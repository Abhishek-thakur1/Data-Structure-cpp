#include <iostream>
#include "BST.h"
#include "BST.cpp"

using namespace std;

int main(){
    BST *bst = new BST();

    bst->print();

    bst->insertNode(10);
    bst->insertNode(15);
    bst->insertNode(12);
    
    bst->insertNode(8);
    bst->insertNode(2);
    bst->insertNode(1);

    bst->search(2);
    bst->search(3);

    bst->print();

    getchar();
    getchar();

    
    delete bst;
    return 0;
}