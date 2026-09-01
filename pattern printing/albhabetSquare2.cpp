#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number of rows: ";
    cin>>n;
    for(int row= 1; row<=n; row++){
        char name= 'a'+row-1; //ascii value me convert sirf single qoutes me hoga;
        for(auto col=1; col<=n; col++){
            cout<<name<<" ";
        }
        cout<<'\n';
    }
}