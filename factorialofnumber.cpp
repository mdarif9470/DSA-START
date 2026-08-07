#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int product = 1;
    for(int i=1; i<=n; i++){
        product*=i;   
    }
    cout<<product<<"\n";
}

//agar n number tak ka factorial nikalna ho toh bs cout ko utha K LOOP ke ander dal dena hai isse ye hoga ki har baar jo i ki value hoga uska factorial print ho jayega or agar simple sirf ek number ka chahiye toh cout ko loop ke bahar hi rakho.