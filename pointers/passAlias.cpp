#include<bits/stdc++.h>
using namespace std;
void swap (int &a, int &b){
    int temp =a;
    a= b;
    b= temp;
    return;
}
int main(){
    int a,b;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;
    swap(a,b);
    cout<<a<<" "<<b;
}