//swapping two number using pointers psaaing by reference
#include<bits/stdc++.h>
using namespace std;
void swap (int* x, int* y){ 
    int temp = *x;
    *x=*y;
    *y= temp;
    return;
}
int main(){
    int x,y;
    cout<<"enter first number : ";
    cin>>x;
    cout<<"enter second number : ";
    cin>>y;
    swap(&x,&y); 
    cout<<x<<" "<<y;
}

//main ke ander 2 input liye phir swap chala x, y ka koi address hoga usko hum pass kara diye swap function me jaise hi swap function chal uske ander bhi 2 dabbe bane jiske ander do value pass kiye x,y uske ander 2 int data type address save ho rahe hai or inn dono ka bhi kuch na kuch address hoga pkir ek int temp bana uske ander *x diya (pehle x pe jao phir x ke address pe jao usko utha ke laao) toh temp jaake ander x ka value aa jayega *x =*y ka ntlb hai ki x ki value y kar do original value 
