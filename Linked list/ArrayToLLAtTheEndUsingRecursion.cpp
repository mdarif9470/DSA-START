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

Node* CreateLL(int arr[], int index, int size){
    if(index==size){
        return NULL;
    }
    Node* temp;
    temp= new Node(arr[index]);
    temp -> next = CreateLL(arr, index+1, size);
    return temp;
}

int main(){
    Node *head = NULL;
    

    int arr[]= {2,4,8,6,10,1,9};
    int size= sizeof(arr)/ sizeof(arr[0]);
    
    head= CreateLL(arr,0,size);

    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp -> next;
    }

}