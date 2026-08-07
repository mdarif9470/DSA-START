//oddnumber using continue.
#include <bits/stdc++.h>
using namespace std; 
int main(){
    for ( int i=1; i<=100; i++){
        if (i%2==0) continue; //agar if true hua toh wo loop ek baar skip ho jayega jaise ki pehle wo one ke liye check karega lekin wo false hoga toh phir wo cout me 1 print karwa dega lekin jab 2 jayega toh uska statement true ho jayega phir uske baad cout nahi chalega wo skip ho jayega...
        cout<<i<<"\n"; 
    }
}