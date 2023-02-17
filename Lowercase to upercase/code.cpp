/*----->>> Mahady Hasan Fahim
Inshallah, Don't wast you importent time keep codding
Stop using facebook,and youtube entertainment */

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    cin>>a;
    if(islower(a[0])){
        a[0]-=32;

    }
   cout<<a;
   return 0;
}