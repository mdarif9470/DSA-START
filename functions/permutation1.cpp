#include<bits/stdc++.h>
using namespace std;

int fun(int x){

    int f=1;
    for(int i=1; i<=x; i++){
        f*=i;
    }
    return f;
}

int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int r;
    cout<<"enter the value of r: ";
    cin>>r;
    //permutation ka formula --> n!/ (n-r)!
    int nfact= fun(n);
    int nrfact= fun(n-r);
    int npr= nfact / nrfact;
    cout<<npr;
}