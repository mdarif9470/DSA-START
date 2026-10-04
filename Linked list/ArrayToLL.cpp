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
    Node *head;
    head = NULL;

    int arr[]= {2,4,8,6,10,1,9};
    int size= sizeof(arr)/ sizeof(arr[0]);
/*
sizeof(arr)

Ye batata hai ki poora array kitne bytes ki memory le raha hai.

Ek int generally 4 bytes ka hota hai.

So:

7 integers × 4 bytes
= 28 bytes
Therefore:

sizeof(arr) = 28
Step 2: sizeof(arr[0])
sizeof(arr[0])

arr[0] kya hai?

arr[0] = 2

Ye ek int hai.

Isliye:

sizeof(arr[0]) = 4 bytes
Step 3: Ab divide karo
sizeof(arr) / sizeof(arr[0])

Matlab:

28 / 4
= 7

🎯 7 = array me total elements

Isliye:

int size = sizeof(arr) / sizeof(arr[0]);

ka simple meaning hai:

"Poore array ka size bytes me nikalo aur ek element ka size bytes me nikalo. Dono ko divide karke pata karo ki array me kitne elements hain."
*/

    //this code will add all data of the arr at the begining of the linked list;
    for(int i =0; i<size; i++){
        if(head==NULL){
            head= new Node(arr[i]);
        }
        else{
            Node* temp;
            temp = new Node(arr[i]);
            temp -> next = head;
            head = temp;
        }
    }

    //Print each element of LinkedList;
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp -> next;
    }

}