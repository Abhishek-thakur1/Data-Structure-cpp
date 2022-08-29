#include<iostream>
#include<algorithm>
#include<stdexcept>
#include<queue>
#include "traverse.h"

namespace traverse{

    Node *newNode(int val){
        Node *node = new Node;
        node->data = val;
        node->left = nullptr;
        node->right = nullptr;

        return node;
    }

    Node *insertValue(Node *node, int val){

        if(node == nullptr){
            node = newNode(val);
            return node;
        }

        if(val < node->data){
            node->left = insertValue(node->left, val);
        }else if(val > node->data){
            node->right = insertValue(node->right, val);
        }

        return node;
    }

    // level order traversal
    void PrintBFS(Node *node){
        if(node == nullptr) return;

        std::queue<Node *> Q;
        Q.push(node);

        Node *curr;

        while(!Q.empty()){
            curr = Q.front();
            std::cout<<curr->data << std::endl;
            if(curr->left != nullptr) Q.push(curr->left);
            if(curr->right != nullptr) Q.push(curr->right);
            Q.pop();
        }

    }

    // PRE Order traversal
    void Print_Pre_Order_Traversal(Node *node){
        if(node == nullptr) return;

        std::cout << node->data << std::endl;

        Print_Pre_Order_Traversal(node->left);
        Print_Pre_Order_Traversal(node->right);
    }

    // IN order traversal
    void Print_IN_Order_Traversal(Node *node){
        if(node == nullptr) return;

        Print_IN_Order_Traversal(node->left);
        std::cout << node->data << std::endl;
        Print_IN_Order_Traversal(node->right);
    }

    // POST order traversal
    void Print_POST_Order_Traversal(Node *node){
        if(node == nullptr) return;

        Print_POST_Order_Traversal(node->left);
        Print_POST_Order_Traversal(node->right);
        std::cout << node->data << std::endl;
    }

    bool IsBinarySearchTree(Node *node){
        return IsBetween(node, -10000, 10000);
    }

    bool IsBetween(Node *node, int min, int max){
        if(node == nullptr) return true;

        if(node->data > min && node->data < max && IsBetween(node->left, min, node->data) && IsBetween(node->right, node->data, max)) return true;

        else return false;
    }
}
