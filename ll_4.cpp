//    Calculating the length of the linked list     :-      For this, first i will have to convert the      respective array or vector etc to a linkedlist      then traverse through the whole linkedlist and count using a counter variable
#include<iostream>
#include<vector>

using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node(int data1,Node *next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node *convert_vec_to_ll(vector <int> &vec){
    Node *head = new Node(vec[0]);
    Node *mover=head;
    for(int i=1;i<vec.size();i++){
        Node *temp = new Node(vec[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

int count(Node *head){
    Node *temp=head;
    int cnt=0;
    while(temp){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

int main(){
    vector <int> v1 = {2,3,4,3,2,3,4,3};
    Node *head=convert_vec_to_ll(v1);
    cout<<"The number of elements in ll is "<<count(head);
    return 0;
}