#ifndef binarySearchTree_h
#define binarySearchTree_h


class BinarySearchTree{
    public:
        virtual void preorderTraversal() = 0;
        virtual void add (int) = 0;
        virtual bool search(int) = 0;  
};

#endif