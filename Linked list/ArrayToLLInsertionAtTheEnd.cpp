#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int value){
            data= value;
            next= NULL;
        }
};

int main(){
    Node *head = NULL;
    Node *tail = NULL;

    int arr[]= {2,4,8,6,10,1,9};
    int size= sizeof(arr)/ sizeof(arr[0]);

    for(int i=0; i<size; i++){
        if(head==NULL){
            head = new Node(arr[i]);
            tail = head;
        }
        else{
            tail -> next = new Node(arr[i]);
            tail= tail -> next;
        }
    }

    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp -> next;
    }

}