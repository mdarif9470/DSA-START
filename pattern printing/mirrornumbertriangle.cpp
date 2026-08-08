#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){ //spaces ke liye ye wala loop. ye reverse triangle wala code hi hai.
            cout<<" ";
        }
        for (int k=1; k<=i; k++){
            cout<<k;
        }
        cout<<"\n";
    }

}