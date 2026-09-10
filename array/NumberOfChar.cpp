#include<bits/stdc++.h>
using namespace std;

int main(){
    string sentence;
    getline(cin, sentence);
    // ye sentence ke har ek char ke saath index print karega 
    /*
    0 h
    1 e 
    2 l
    3 l 
    4 o
    iss type me print hoga lekin agar sirf sentence ka count chahiye toh ye code chalayenge;
    bas cout<<sentence.length() se sentence ke har char ka length mil jayega lekin agar humlog ko count 1 se start na hoke 0 se ho toh hum bas cout<<sentence.length()-1; kar dete;
    */
   cout<<sentence.length()<<'\n';
   cout<<sentence.length()-1<<'\n';
    // int count = 0;

    // for( int i=0; i<sentence.length();i++){
    //     cout<<i<<" "<<sentence[i]<<'\n';
    //     count++;
    // }
    // cout<<count<<'\n';
    return 0;
}