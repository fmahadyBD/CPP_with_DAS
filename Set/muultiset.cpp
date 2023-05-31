#include<iostream>
#include<set>
using namespace std;
int main(){
    // it is log n
    multiset<int> s;
    s.insert(2);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.insert(4);
    for(auto i:s){
        cout<< i<< " ";
    }
    cout<<endl;
    // s.erase(2);
    // it will delete every 2
    s.erase(s.find(2));
       for(auto i:s){
        cout<< i<< " ";
    }
    return 0;
}