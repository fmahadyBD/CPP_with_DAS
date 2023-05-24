#include<iostrem>
#include<vactor>
using namespace std;

void display(vactor<int> &vc){
for(int i=0;i<vc.size();i++){
cout<<vc[i];
}
}


int main(){
int input, size;
cin>>size;
vactor<int> vc;
for(int i=0;i<size;i++){
cin>>vc[i];
}
vactor<int>::iterator itr=vc.begin();
vc.insert(itr,5);
// copy the element 
vc.insert(itr,4,44);
//mans 44 will copy 4 times;
display(vc);
}
