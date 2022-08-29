
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

    // PRE order traversal
    void Print_Pre_Order_Traversal(Node *node); 

    // IN order traversal
    void Print_IN_Order_Traversal(Node *node); 

    // POST order traversal
    void Print_POST_Order_Traversal(Node *node);

    // Returns true if tree is a binary search tree
    bool IsBinarySearchTree(Node *node);
    // Returns true if all items in the given tree are between the given values
    bool IsBetween(Node *node, int min, int max);
}

#endif 
