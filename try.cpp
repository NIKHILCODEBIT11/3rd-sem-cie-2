#include<iostream>
using namespace std;
 class Node{
    public:
    int data;
    Node * next;
    Node(int data1,Node * next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
 };

 class ll{
    Node *head;     // head is not a NODE, it is just a pointer (or reference) that points to the first node of the list.
    public:
    ll(){
        head=nullptr;
    }
    void insert_at_end(int value){
        Node *newnode = new Node(value);        // 10,null in newnode 
        if(head==nullptr){
            head=newnode;
        }
        else{
            Node *temp;     
            temp=head;
            while(temp != nullptr){
                temp = temp->next;
                cout<<temp<<endl;
            }
        }
    }

    void display() {
        if (head == nullptr) {
            cout << "The list is empty." << endl;
            return;
        }
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";  // Print the data of each node
            temp = temp->next;             // Move to the next node
        }
        cout << "NULL" << endl;
    }

 };
int main(){
    ll l;
    l.insert_at_end(10);
    l.insert_at_end(20);
    // l.display();
    return 0;
}
/*
 Differentiate when a node is defined and when a pointer to a node is defined?

 If i am using "new" keyword along with Node* then it is a node otherwise it is a pointer to a node
 */