#include "arrayBST.h"
#include <iostream>

ArrayBST::ArrayBST()
{
	for(int i=0;i<MAX_SIZE;i++){
		this->element[i]=0;
	}
}

int ArrayBST::get_left_child(int index) const
{
    if(element[index]!=0 && (2*index)<=MAX_SIZE){
        return 2*index;
    }
    return -1;
}

int ArrayBST::get_right_child(int index) const
{
    if(element[index]!=0 && (2*index+1)<=MAX_SIZE){
        return 2*index+1;
    }
    return -1;
}

void ArrayBST::preorderTraversal(int index) const{
	if(index>0 && element[index]!=0)
    {
        std::cout<<element[index]<<std::endl;
        preorderTraversal(get_left_child(index));
        preorderTraversal(get_right_child(index));
    }
}


void ArrayBST::add(int data)
{
	if(this->element[0]==0){
		element[1]=data;
	}
	else{
		for(int i=1;i<=MAX_SIZE; ){
			if(data<this->element[i]){
				i=2*i;
			}
			else{
				i=2*i+1;
			}
			if(this->element[i]==0){
				this->element[i]=data;
				break;
			}
		}
	}
	this->element[0]=this->element[0]+1;
}

bool ArrayBST::search(int data) const
{
	int current_index=1;
	while(current_index<=MAX_SIZE){
	    if(element[current_index]==data){
	        return true;
	        break;
	    }
	    else if(element[current_index]>data){
	        current_index=2*current_index;
	    }
	    else if(element[current_index]<data){
	        current_index=2*current_index+1;
	    }
	}
	return false;
}


int main(){
	ArrayBST tree;
	tree.add(11);
	tree.add(12);
	tree.add(13);
	tree.add(14);
	tree.search(15);
	tree.preorderTraversal(15);
	return 0;
}
