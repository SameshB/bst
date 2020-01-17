#ifndef binarySearchTree_h
#define binarySearchTree_h


class BinarySearchTree{
    public:
        virtual void preorderTraversal(int) const = 0;
        virtual void add (int) = 0;
        virtual bool search(int) const = 0;  
};

#endif