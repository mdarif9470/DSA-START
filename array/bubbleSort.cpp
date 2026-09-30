#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size Of The Array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int j=n-2;j>=0; j--){
        bool swapped = 0;
        for(int i=0; i<=j; i++){
        if(arr[i]>arr[i+1]){
            swapped=1;
            swap(arr[i], arr[i+1]);
        }
        }
        if(swapped==0)
        break;
    }
    for(int k=0; k<n; k++){
        cout<<arr[k]<<" ";
    }
}