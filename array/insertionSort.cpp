#include<bits/stdc++.h>
using namespace std;
int main (){
    int arr[1000];
    int n;
    cout<<"Enter the Size of Array: ";
    cin>>n;
    //for taking input int array;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //for insertion sorting of array this loop will work;
    for(int i=1; i<n; i++){ //ye loop decide karega ki mera j walaa loop konse element se shuru hokee kisko kisko compare karega;
        for(int j=i; j>0; j--){ // ye loop compare karne ke liye hai ki mera pichla element current element se chota hai ki nahi agar hai toh swap kar dega;
            if(arr[j]<arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
            else{
                break;
            }
        }
    }

    //for printing the element of array;
    for (int k=0; k<n; k++){
        cout<<arr[k]<<" ";
    }
}