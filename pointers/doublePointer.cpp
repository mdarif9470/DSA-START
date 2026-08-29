#include<bits/stdc++.h>
using namespace std;
int main(){
    int n= 5;
    int* ptr = &n;
    int** p= &ptr;
    cout<<n<<endl;
    cout<<*ptr<<"\n";
    cout<<ptr<<'\n';
    cout<<p<<'\n';

}