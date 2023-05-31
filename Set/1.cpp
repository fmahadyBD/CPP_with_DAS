#include<iostream>
#include<set>
 using namespace std;
 int main(){
//log n
    set<int>s;
    s.insert(1);
    s.insert(3);
    for(auto i:s){
        cout<<i<<" ";

    }



    return 0;
 }