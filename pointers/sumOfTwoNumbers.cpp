#include<bits/stdc++.h>
using namespace std;
int main(){
    // int x= 7;
    // int y= 9;
    int x,y;
    cout<<"enter first number : ";
    cin>>x;
    cout<<"enter second number : ";
    cin>>y;
    int *p1= &x;
    int *p2= &y;
    cout<<*p1 + *p2;
}
// pointers ko hamesha alag alag line me lete hai int *p1= &x; int *p2= &y; esse 