#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << " enter a number: ";
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1; col<=n; col++){
            cout<<col<<" ";
        }
        cout<<'\n';
    }
}