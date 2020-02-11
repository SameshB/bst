#include<iostream>
#include "arrayBST.h"

BinaryTree::BinaryTree(){
    std::cout<<"Tree inited\n";
}

void BinaryTree::add(int data){
    int indexToAdd = 1;
    Node* node = new Node();
    node->data = data;
    node->key = indexToAdd;

    if(isEmpty()){
        //Add data to first element of array
        addToIndex(indexToAdd,node);
    }else{
        Node* root = datas[1];
        insert(root, node, root->key);
    }

}

bool BinaryTree::isEmpty(){
    return (this->datas[1] == NULL);
}

void BinaryTree::insert(Node* root, Node* node, int key){
    if(root == NULL){
        node->key = key;
        datas[key] = node;
    }else if(root->data > node->data){
        //add to left
        int leftKey = getLeftChildIndex(root->key);
        Node* left = datas[leftKey];
        insert(left,node,leftKey);
    }else{
        //add to right
        int rightKey = getRightChildIndex(root->key);
        Node* right = datas[rightKey];
        insert(right,node,rightKey);
    }
}

//Public
void BinaryTree::preorderTraversal(){
    std::cout<<"****\n";
    if(isEmpty()) throw "Tree is empty";
    Node* root = datas[1];
    traverseVLR(root);
    std::cout<<"\n****\n";
} 

//VLR
void BinaryTree::traverseVLR(Node* root){
    if(root != NULL){
        std::cout << root->data <<" ";

        Node* left = datas[getLeftChildIndex(root->key)];
        traverseVLR(left);

        Node* right = datas[getRightChildIndex(root->key)];
        traverseVLR(right);
    } 
}


void BinaryTree::addToIndex(int indexToAdd,Node* node){
    datas[indexToAdd] = node;
}

int BinaryTree::getRightChildIndex(int key){
    return 2*key+1;
}

int BinaryTree::getLeftChildIndex(int key){
    return 2*key;
}


// Search 
bool BinaryTree::search(int data){
    if(isEmpty()) return false;
    Node* root = datas[1];
    return findInNode(root, data);
}

bool BinaryTree::findInNode(Node* root, int data){
    if(root == NULL)return false;
    if(root->data == data)return true;
    if(root->data > data){
        Node* left = datas[getLeftChildIndex(root->key)];
        return findInNode(left,data);
    }else{
        Node* right = datas[getRightChildIndex(root->key)];
        return findInNode(right,data);
    }
}