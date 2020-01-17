#include <iostream>
#include "binarySearchTree.h"

#define MAX_SIZE 20

class ArrayBST : public BinarySearchTree{
	private:
	   int element[MAX_SIZE];
	public:
		ArrayBST();
		void preorderTraversal(int) const;
		void add(int);
		bool search(int) const;
		int get_left_child(int) const;
		int get_right_child(int) const;
};
