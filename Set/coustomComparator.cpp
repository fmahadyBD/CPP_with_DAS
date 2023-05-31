#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int,greater<int>>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    for(auto i:s){
        cout<<i<<" ";
    }
    s.erase(2);
    s.erase(s.begin());
    s.erase(s.begin());

    return 0;
}