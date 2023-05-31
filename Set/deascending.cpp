#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(5);
    for(auto i:s){
        cout<<i<<" ";
    }
     

    cout<<endl;
    for(auto i=s.rbegin(); i!=s.rend();i++){
        cout<<*i<<" ";
    }
     cout<<endl;
   cout<< s.size();
    return 0;
}