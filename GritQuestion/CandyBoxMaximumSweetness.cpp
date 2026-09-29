#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int candies[n];
    for(int i=0; i<n; i++){
        cin>>candies[i];
    }
    int maximumsweetness;
    cin>>maximumsweetness;
    int count =0;
    for(int i=0; i<n; i++){
        int product = 1;
        for(int j=i; j<n; j++){
            product= product*candies[j];
            if(product< maximumsweetness){
                count++;
            }
        }
    }
    cout<<count<<'\n';
    return 0;
}