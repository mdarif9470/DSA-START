#include<bits/stdc++.h>
using namespace std;
int main (){
    int* ptr= NULL; //reserved address
    cout<<ptr;//0x0
}
//"\0" -> null character isme warning dega terminal me lekin output me 0x0 phir bhi dega (ascii value -> 0)
//0 bhi null chatacter hai