#include<iostream>
using namespace std;

struct Node{
    int data;
   struct Node*left;
   struct Node* right;
   Node(int x){
    data=x;
    left=NULL;
    right=NULL;

   }
    
};
int search(int ino[],int start,int end,int val){
    for(int i=start;i<=end;i++){
        if(ino[i]==val){
            return i;
        }

    }
    return -1;
}
Node* build(int pos[],int ino[],int start,int end){
    static int dx=4;
    if(start>end){
        return NULL;
    }
    int val=pos[dx];
    dx--;
    Node *curr=new Node(val);
    if(start==end){
        return curr;
    }
int pos=search(ino,start,end,val);
// curr->right(pos,ino,pos+1,end);
// curr->left(pos,start,pos-1);

 curr->right = build(pos, ino, pos + 1, end);
    curr->left = build(pos, ino, start, pos - 1);


return curr;
}
int main(){
int pos[]={4,2,5,3,1};
int ino[]={4,2,1,5,3};
Node*root=build(pos,ino,0,4);
}