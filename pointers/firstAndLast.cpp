#include<bits/stdc++.h>
using namespace std;
void find (int n , int* ptr, int* ptr2){
    *ptr2 = n%10;
    while(n>9){
        n/=10;
    }
    *ptr= n;
    return;
}

int main(){
    int n;
    cin>>n;
    int firstDigit, lastDigit;
    int* ptr = &firstDigit;
    int* ptr2 = &lastDigit;
    find(n, ptr, ptr2);
    cout<<firstDigit<<" "<<lastDigit;
}