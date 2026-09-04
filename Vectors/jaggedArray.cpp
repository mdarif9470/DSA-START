#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arr(4);
    int totalrow= arr.size();
    cout<<totalrow<<'\n';
    //created 2d array in vector;
    //with 4 rows;
    arr[0]= vector<int>(5);
    arr[1]=vector<int>(3);
    arr[2]= vector<int>(4);
    arr[3]=vector<int>(2);
    //jagged array ke columns ke nikalne ke liye ;

    for(int i=0;i<=arr.size()-1;i++){
       cout<<"arr["<<i<<"] size= "<< arr[i].size()<<'\n';
    }

}