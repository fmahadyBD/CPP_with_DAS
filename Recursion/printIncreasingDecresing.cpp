#include<iostream>
using namespace std;

void decrease(int arr[],int n){
    if(n==-1){
        return;
    }
    
     cout<<arr[n]<<" ";
   decrease(arr,n-1);


}
void increase(int arr[],int n){
    if(n==-1){
        return;
    }
    
   increase(arr,n-1);
    cout<<arr[n]<<" ";


}
int main(){
    int arr[]={1,2,3,4,5};
    decrease(arr,4);
    cout<<endl;
    increase(arr,4);
}