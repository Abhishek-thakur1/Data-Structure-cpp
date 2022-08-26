#include <iostream>
#include<stdexcept>
#include "BST.h"

using namespace std;

// BST::BST() {  }

BST::~BST() {}

void BST::insertNode(int data){
    Node * newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = NULL;

    insert(root, newNode);

    size++;
}

void BST::insert(Node *&root, Node *&newNode){

    if(root == NULL) root = newNode;

    
	else if (newNode->data < root->data)
    {
        insert(root->left, newNode);
    }
    else
    {
        insert(root->right, newNode);
    }
}


void BST::print() {
	Node* temp = root;
	cout << endl;
	cout << endl << "Printing data in BST..." << endl;
	DisplayInOrder(temp);
}

void BST::DisplayInOrder(Node* temp) {
	if (root == NULL) {
		cout << endl << "List is empty. Nothing to display." << endl;
		return;
	}

	if (temp->left != NULL) {
		DisplayInOrder(temp->left);
	}
	
	cout << temp->data << endl;
	
	if (temp->right != NULL) {
		DisplayInOrder(temp->right);
	}

	// cout << temp->data;
}

void BST::search(int data) {
	Node* temp = root;
	searchNode(temp, data);
}

void BST::searchNode(Node* temp, int data) {
	if (root == NULL) {
		cout << endl << "List is empty. No items to match." << endl << endl;
		return;
	}

	if (temp->left != NULL) {
		searchNode(temp->left, data);
	}

	if (temp->data == data) {
		cout << endl << "Search Operation: Node with value " << data << " found." << endl;
		return;
	}

	if (temp->right != NULL) {
		searchNode(temp->right, data);
	}
}

void BST::printSize(){
	cout << endl << "Size of BST is " << size << " nodes." << endl;
}

void BST::printMIN(){
	Node *tmp = root;
	cout<< "Minimum Element in the TREE: " << findMin(tmp) << endl;
}

int BST::findMin(Node *tmp){
	if(tmp == NULL){
		throw invalid_argument("Tree is Empty");
	}

	while(tmp->left != NULL){
		tmp = tmp->left;
	}
	return tmp->data;
}
