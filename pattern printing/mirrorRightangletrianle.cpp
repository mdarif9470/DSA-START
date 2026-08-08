// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number of rows: ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         int space =n-i;
//         cout<<string(space,' ')<<string(i,'*');
//         cout<<"\n";
//     }

// }
//uper wala pattern sirf ek loop se ho gaya lekin humlog ko nested loop se banana tha to uska code niche hai.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number of rows: ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             if((i+j)>=n+1)cout<<"*";
//             else cout<<" ";
//         }
//     }
// }
//ye code 2 nested loops se bana raha hai. isme logic thoda jada lagega. ye bas curtain question k liye hota hai.
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
            cout<<"*";
        }
        cout<<"\n";
    }

}