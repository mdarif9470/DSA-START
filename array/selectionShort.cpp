#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<" Enter Size Of Array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter Elements Of Array : ";
    for(int a=0; a<n; a++){
        cin>>arr[a];
    }
    for(int i=0; i<n-1; i++){
        int index = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[index]){
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }

    for(int k=0; k<n; k++){
        cout<<arr[k]<<" ";
    }
}