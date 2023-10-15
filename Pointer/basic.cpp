#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *b=&a;
    cout<<"Address ponter:"<<b<<endl;
    cout<<"Address by &  :"<<&a<<endl;
    cout<<"dereferences of pointer variable:"<<*b<<endl;
}