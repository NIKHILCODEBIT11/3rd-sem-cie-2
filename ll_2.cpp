#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data1,Node * next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convert_arr_to_ll(vector <int> &arr){
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for(int i=1;i<arr.size();i++){
        Node *temp = new Node(arr[i]);
        mover->next=temp;
        // mover++;     ---> This will not give me required iteration as ll is not in contigious so mover=mover+1, will be of no use
        mover=temp;     //   Or   mover=mover->next;
        cout<<mover->data<<" ";
    }
    return head;
}

int main(){
    vector <int> arr = {22,3,4};
    Node *head = convert_arr_to_ll(arr);
    //cout<<head->data;
    return 0;
}