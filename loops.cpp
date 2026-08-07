// Check if a number is prime or not.

#include<bits/stdc++.h>
using namespace std ;
int main (){
    int n ;
    cout << " Enter a number : " ;
    cin >> n ;
    bool prime = true; 
    for (int i=2 ; i <= n-1 ; i++){
        if (n % i == 0){
            prime = false;
            break ;
        }
    }
    if (n==1) cout<<"1 is neither prime nor composite. ";
    else if (prime == true ) cout<<n<<" is a prime number.";
    else cout << n << " is a composite number" << endl ;
};