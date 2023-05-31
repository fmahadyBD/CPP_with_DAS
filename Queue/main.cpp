#include<iostream>
#include<queue>

//FIFO
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(11);
    q.push(111);
    q.push(1111);
    q.push(11111);
    q.push(111111);

    if(q.empty()){
        cout<<" queue is emplty"<<endl;
    }
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    while(!q.empty()){
        cout<<"The dequeue: "<<q.front()<<endl;
        q.pop();
    }
}