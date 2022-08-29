
#ifndef TREE_TRAVERSAL_H
#define TREE_TRAVERSAL_H


namespace traverse{

    struct Node{
        int data;
        Node *left;
        Node *right;
    };

    Node *newNode(int data);
    Node *insertNode(Node *node, int val);
    
    // level order traversal
    void PrintBFS(Node *node); 
}

#endif 
