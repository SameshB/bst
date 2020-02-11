#include<iostream>
#include"arrayBST.h"

int main(){
    BinaryTree arrayTree;
    std::cout << "Pre order traveral: " << std::endl;
    arrayTree.add(2);
    arrayTree.add(5);
    arrayTree.add(7);
    arrayTree.add(11);
    arrayTree.preorderTraversal();

    std::cout << "Adding 13 :" << std::endl;
    std::cout << "Pre order traveral :" << std::endl;
    arrayTree.add(10);
    arrayTree.preorderTraversal();

    std::cout << std::boolalpha;
    std::cout << "Searching for 5: ";
    std::cout << (arrayTree.search(5)) << std::endl;
    std::cout << "Searching for 12: ";
    std::cout << (arrayTree.search(13)) <<std::endl;
}