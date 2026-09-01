#include<bits/stdc++.h>
using namespace std;
void swap (int x, int y){
    int temp = x;
    x=y;
    y= temp;
    return;
}
int main(){
    int x,y;
    cout<<"enter first number : ";
    cin>>x;
    cout<<"enter second number : ";
    cin>>y;
    swap(x,y);
    cout<<x<<" "<<y;
}