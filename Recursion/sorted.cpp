#include<iostream>
using namespace std;
bool sorted(int arr[],int n){
    if(n==0){
        return true;
    }

    bool is=(sorted(arr+1,n-1));
    return (arr[0]<arr[1] && is);
    
}
int main(){
  int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool ans=sorted(arr,n);
    cout<<ans;
}