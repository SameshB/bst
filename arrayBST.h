#pragma once
#define MAX_SIZE 1000
#include "binarySearchTree.h"

class Node {
	public:
	    int key;
	    int data;

  	Node(){}
};

class BinaryTree:public BinarySearchTree{
    public:
    	BinaryTree();

    	void add(int);	
    	int find(int);	
    	bool search(int);
    	void preorderTraversal();
    	bool isEmpty();

    private:
	Node* datas[MAX_SIZE];
	void addToIndex(int , Node*);
	void traverseVLR(Node* );
	void insert(Node* , Node* , int);
	int  size(Node* root);
	int getRightChildIndex(int);
	int getLeftChildIndex(int );
	bool findInNode(Node* , int );
	int findRootInNode(Node* ,int);
};
