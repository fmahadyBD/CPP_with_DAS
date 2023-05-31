#include<iostream>
#include<stack>
//LIFO
using namespace std;
 int main(){
    stack<int> s;
    s.push(1);
    s.push(3);
    s.push(6);
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    cout<<s.size()<<endl;
    while (!s.empty())
    {
       cout<<s.top()<<endl;
       s.pop();
    }
    


    return 0;
 }