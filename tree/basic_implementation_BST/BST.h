#pragma once

// template <typename T>
class BST{
    private:
    struct Node { 
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
    void insert(Node *&root, Node *&newBnode);
    void print();
    void DisplayInOrder(Node *root);

    void search(int data);
    void searchNode(Node *temp, int data);
};