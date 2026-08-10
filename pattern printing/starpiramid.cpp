#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for (int i=1; i<=n; i++){
        for (int j=1;j<=n-i;j++){ //is loop se spaces print hoga
            cout<<" ";
        }
        for (int k=1;k<=2*i-1;k++){ //is loop se odd star print hoga 
            cout<<"*";
        }
        cout<<'\n';
    }
};