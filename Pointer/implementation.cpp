#include<iostream>
using namespace std;

void increass(int *a,int *b){
   * a=*a+1;
   * b=*b+1;
}
int main(){
    int a=10;
    int b=20;
    increass(&a,&b);
    cout<<a<< "    "<<b<<endl;
}