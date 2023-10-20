#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node* right;
    Node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};
int search(int pre[],int ino[],int start,int end,int cur){
    for(int i=start;i<=end;i++){
        if(ino[i]==cur){
            return i;
        }
    }
    return -1;
}

Node* build(int pre[],int ino[],int start,int end){
    static int indx=0;
    if(start>end){
        return NULL;
    }
    int curr=pre[indx];
    indx++;
    Node* node=new Node(curr);
    if(start==end){
        return node;
    }
    int pos=search(pre,ino,start,end,curr);
    node->left=build(pre,ino,start,pos-1);
    node->right=build(pre,ino,pos+1,end);

    return node;
}
void in(struct Node* root){
    if(root==NULL){
        return;
    }
    in(root->left);
    cout<<root->data<<" ";
    in(root->right);
}

int main(){
    int pre[]={1,2,4,3,5};
    int ino[]={4,2,1,5,3};
   Node* root= build(pre,ino,0,4);
   in(root);

}