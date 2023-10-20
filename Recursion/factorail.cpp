#include<iostream>
using namespace std;
int fac(int n){

    // base case
    if(n==0){
        return 1;
    }
    int small=fac(n-1);
    int big=n*small;

    // last return 1; to (n-1) it means it will be 1; so small will be 1 by retured, and n will be 1 cause last second;
    return big;

}
int main(){
    int n;
    cin>> n;
    int ans=fac(n);
    cout<<ans;
}