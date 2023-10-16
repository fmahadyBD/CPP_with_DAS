#include<iostream>
#include<queue>
using namespace std;
void print(queue<int>&temp){
    while(!temp.empty()){
        cout<<temp.front()<<" ";
        temp.pop();
    }
}
void rprint(queue<int>&temp){
    if(temp.empty()){
        return;
    }
    int save=temp.front();
    temp.pop();
    rprint(temp);
    cout<<save<<" ";
}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    queue<int>temp=q;
    queue<int>temp2=q;
    cout<<" print Normal Queue:";
    print(temp);
    cout<<endl;
    cout<<"Print reverse way:";
    rprint(temp2);
}
