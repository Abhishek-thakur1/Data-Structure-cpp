#include <iostream>
#include "../BST.h"
#include "BST.cpp"

using namespace std;

int main(){
    BST *bst = new BST();

    bst->print();

    bst->insertNode(15);
    bst->insertNode(10);
    bst->insertNode(20);
    
    bst->insertNode(17);
    bst->insertNode(12);
    bst->insertNode(25);
    bst->insertNode(8);

    bst->search(8);
    bst->search(3);

    bst->print();

    bst->printSize();

    bst->printMIN();
    bst->printMAX();

    bst->printHeight();

    getchar();

    delete bst;
    return 0;
}