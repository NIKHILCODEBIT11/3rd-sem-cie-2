#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data = data1;
        next=nullptr;
    }
};
int main(){
    Node x = Node(2);
    cout<<x.data<<endl;
    cout<<x.next<<endl;

    // Node *x1=Node(3);        // Error
    Node * x2 = new Node(3);
    cout<<x2<<endl;
    cout<<x2->data<<endl;
    cout<<x2->next<<endl;

    // Node *x3 = &Node(4);     ---->   Getting erros as   error: taking address of temporary [-fpermissive]     Node *x3 = &Node(4);
    // Node(4);     Even this creates a temporary object
    Node x_ = Node(4);
    Node *x3 = &x_;
    cout<<x3<<endl;
    cout<<x3->data<<endl;
    cout<<x3->next<<endl;
    return 0;
}