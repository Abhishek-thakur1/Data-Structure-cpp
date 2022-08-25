#pragma once

class BST{
    private:
    struct Node{
        int data;
        Node *left = nullptr;
        Node *right = nullptr;
    };

    Node *root;
    int size = 0;

    public:
    BST();
    ~BST();
    Node *getRoot() { return root; }
    void printSize();
    void insertNode(int data);
};