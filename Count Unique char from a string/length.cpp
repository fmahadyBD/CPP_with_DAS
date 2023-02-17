
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int count=0;
    cin>>a;
     //sort(str.begin(), str.end());
     sort(a.begin(), a.end());
     for(int i=0;i< a.size() ;i++){
        if(a[i]!=a[i+1]){
            count++;
        }
     }


   
   
   
   return 0;
}