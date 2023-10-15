#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    cout<<"*arr is a constent pointer,It will print 1st  value *arr: "<<*arr<<endl;
    int *prt=arr;
    for(int i=0;i<4;i++){
        cout<<"Using extra pointer varriable: "<<*prt<<endl;
        prt++;

    }
    for(int i=0;i<4;i++){
        //*(arr + i) is equivalent to arr[i].
        cout<<"*(arr + i): "<<*(arr + i)<<endl;
       

    }
}