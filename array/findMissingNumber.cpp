#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum =0;
    for( int i=0; i< n; i++){
        cin>>arr[i];
        sum += arr[i];

    }
    int expectedValue = (n+1)*(n+2)/2;
    int missingNumber = expectedValue - sum ;
    cout<<"Missing Number is : "<<missingNumber;
    return 0;
}