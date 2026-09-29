#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int t= s.length();
    if(t%2!=0){
        cout<<"-1"<<'\n';
    }
    else{
        int mid1= s[(t/2)-1]-'0';
        int mid2 = s[t/2]-'0';
        double average= (mid1 +mid2) / 2.0;
        cout<<fixed<<setprecision(2)<<average<<'\n';
    }
    return 0;
}