#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> marks;
    // adding new values in vector;
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);
    //traversing thee vector using iterator;
    //create karenge iteratorr ;
    vector<int>::iterator it = marks.begin();
    while(it!=marks.end()){
        cout<<*it<<" ";
        
    }
    cout<<"size : "<<marks.size()<<'\n';
    cout<<*(marks.begin())<<'\n';//isko hum pointer ke tour pe access kar skate hai;
    cout<<*(marks.end()-1)<<'\n';//-1 isiliye lagaye kyuki marks.end jo hai wo last ke baad wale jagah ko point karta hai isiliye usko ek piche laane ke liye -1 lagaye;
    cout<<marks.front()<<'\n';
    cout<<marks.back()<<'\n';
    // removing;
    marks.pop_back();
    cout<<"size: "<<marks.size()<<'\n';
    marks[0]=100;
    cout<<marks.at(0)<<'\n';
    cout<<marks[0]<<'\n';

    cout<<marks.front()<<'\n';

    cout<<marks.capacity()<<'\n';//vector me abhi kitne block alocate hue hai wo btata hai;
    //marks.reserve(10) agar hum khud se vector ki capasity reserve karna chahe toh isse kar sakte hai!!;
    //marks.max_size() hum vector mee maximum kitna size le sakte hai;
    //marks.clear() vector ke ander ke saare data hata dega;
    marks.insert(marks.begin(), 50);//hum isko use karke begin ya end me koi bhi value daal sakte hai;
    //marks.erase(marks.begin(),marks.end()); marks ke beggining se leke end tak ke data ko erase kar do;
    vector<int> classes;
    classes.push_back(10);
    classes.push_back(9);
    classes.push_back(2);
    classes.push_back(6);


    marks.swap(classes);//marks ke saare values ko classes ke value se swap kar dega;
    
    //cout<<marks[0]<<" "<<marks[1]<<" "<<marks[2]<<" "<<marks[3]<<'\n';
    //ek ek kaeke print karne se accha hai ki hum for each use karenge;
    for(int i : marks){ // for each vector of marks belongs to i; 
        cout<<i<<" "<<'\n';
    }

    for(int i : classes){ // for each vector of classes belong to i;
        cout<<i<<" "<<'\n';
    }


}