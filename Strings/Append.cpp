/*----->>> Mahady Hasan Fahim
*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="Mahady "; 
    string s2="Hasan";
    cout<<s1+s2<<endl;
    s1.append(s2);
    //s2 will be go to s1;
    cout<<s1;

   
   return 0;
}