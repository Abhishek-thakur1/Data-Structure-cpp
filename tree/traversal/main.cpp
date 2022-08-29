#include<iostream>
#include<assert.h>
#include<stdlib.h>
#include<algorithm>
#include "traverse.cpp"
#include "traverse.h"

using namespace traverse;

int main(){
    

    Node *root = nullptr;

    root = insertValue(root, 18);
    root = insertValue(root, 10);
    root = insertValue(root, 12);
    root = insertValue(root, 65);
    root = insertValue(root, 100);
    root = insertValue(root, 2);
    root = insertValue(root, 1);
    root = insertValue(root, 29);
    root = insertValue(root, 9);

    std::cout << "Tree items (breadth-first) in level order: "<< std::endl;
    PrintBFS(root);
    std::cout << std::endl;

    std::cout << "Tree items (depth-first) in PRE order: "<<std::endl;
    Print_Pre_Order_Traversal(root);
    std::cout << std::endl;

    // getchar();
    return 0;
}