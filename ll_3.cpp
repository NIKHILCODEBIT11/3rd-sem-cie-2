//   in a linked list, each node contains a reference to the next node, and that reference should be a pointer (since nodes are dynamically allocated in most cases).

// Traversing through an array

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data1,Node *next1){
        data=data1;
        // next=next1;      A reference in C++ must refer to an existing object, and it cannot be changed to refer to another object once it is initialized.
        next=next1;
    }

    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

/*

I can do like this :-


class Node {
public:
    int data;
    Node& next;  // Reference to the next node

    // Constructor to initialize data and next reference
    Node(int data1, Node& next1) : data(data1), next(next1) {
        // Note: This approach requires that next1 must exist when the node is created
    }
};


*/

//    Below is the function to convert an array to a linkedlist
Node* convert_arr_to_ll(int arr[],int size){
    Node * head=new Node(arr[0]);
    Node * mover = head;
    //  for(int i=1;i<(sizeof(arr))/(sizeof(arr[0]));i++){      It won't work as whenever i pass an array then that automatically becomes a pointer, and the way of finding size(), is incorrect because      (sizeof(arr))/(sizeof(arr[0]))     here it is not array which will return size, rather it's a pointer
        for(int i=1;i<size;i++){
        Node * temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;     //  Or   mover=mover->next;
    }
    return head;
}

int main(){
    int arr[]={3,4,3,4,5};
    Node *head=convert_arr_to_ll(arr,5);
    Node * temp=head;
    while(temp){        //  Since, at last temp = nullptr which is nothing but null or false, so automatically traversing will stop, while in rest cases the next of temp has certain values unlike nullptr
    // Or while(temp != nullptr)
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}

// In while condition, i wrote temp, which is of type Node* which stores pointer to the memory address of ahead Node, that's why it checks just next not data
//    Never ever do anything with head !!!!!!!!!!