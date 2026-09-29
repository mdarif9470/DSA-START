#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        double temp;
        char unit;
        cin>>temp>>unit;

        if(unit== 'c'){
            double farenheit;
            farenheit= (temp*9.0/5.0)+32;
            cout<<fixed<<setprecision(2)<<farenheit<<'\n';
        }
        else{
            double celcius;
            celcius=(temp-32)*5.0/9.0;
            cout<<fixed<<setprecision(2)<<celcius<<'\n';
        }
    }
return 0;
}