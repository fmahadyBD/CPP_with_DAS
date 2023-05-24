#include<iostream>
#include<vactor>
#include<algorithm>
using namespace

int main(){
vactor<int> v1={1,2,3}
cout<<v1.fornt()<<endl;
cout<<v1.back()<<endl;
cout<<v1.size()<<endl;
v1.push_back();
v1.pop_back();
cout<<v1.capacity();
v1.shrink_to_fit();
//it will be fit equal size of vactor
v1.insert(v1.begin(),5);
//position index, element
v1.erase(v1.begin());


for(int i=0;i<v1.size();i++){

cout<<va[i]<<endl;
}

for(auto itr=v1.begin();itr!=v1.end();++itr){
cout<<*itr<<endl;
}

vactor<int> vc;
int input;
for(int i=0;i<5;i++{
cin>>input;
vc.push_back(input);
}
//sort need algorithm
sort(vc.begin(),vc.end());

}


