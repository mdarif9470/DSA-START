#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    bool found= false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]*2 == arr[j]|| arr[j]*2 == arr[i]){
                found= true;
            }
        }
    }
    if(found == true){
        cout<<"True"<<'\n';
    }else{
        cout<<"Flase"<<'\n';
    }
    return 0;
}