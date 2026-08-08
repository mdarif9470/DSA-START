#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<(char)(j+64)<<" ";//capital alphabet start hota hai 65 se or small start hota hai 97 se.
        }
        cout<<"\n";
    }

}