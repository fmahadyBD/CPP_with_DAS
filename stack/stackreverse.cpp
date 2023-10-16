#include<iostream>
#include<stack>
using namespace std;
void reverseorder(stack<int>&temp){
    if(temp.empty()){
        return;
    }
    int save=temp.top();
    temp.pop();
    reverseorder(temp);
    cout<<save<<" ";
}
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
 stack<int>temp=s;
 reverseorder(temp);

}