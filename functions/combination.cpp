#include <bits/stdc++.h>
using namespace std;
int fact(int x){
    int f = 1;
    for(int i=2; i<=x; i++){
        f*=i;
    }
    return f;
}
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int r ;
    cout<<"enter a number: ";
    cin>>r;
    // combination ka formula --> nCr-> n!/r!*(n-r)! 
    int nfact= fact(n);//n! -> n ka factorial 
    int rfact= fact(r);// r! -> r ka ffactorial 
    int nrfact= fact(n-r);// n-r ka factorial 
    int ncr= nfact/ (rfact*nrfact);
    cout<<ncr;
    
}