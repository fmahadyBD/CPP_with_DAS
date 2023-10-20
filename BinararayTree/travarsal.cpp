#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node*right;
    Node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }

};

void pre(struct Node* root){
    if(root==NULL){
        return;

    }
    cout<<root->data<<" ";
    pre(root->left);
    pre(root->right);
}

void in(struct Node* root){
    if(root==NULL){
        return;
    }
    in(root->left);
    cout<<root->data<<" ";
    in(root->right);
}
void post(struct Node*root){
    if(root==NULL){
        return ;
    }
    post(root->left);
    post(root->right);
    cout<<root->data<<" ";
}
int main(){
struct Node *root=new Node(1);
root->left=new Node(2);
root->right=new Node(3);
root->left->left=new Node(4);
root->left->right=new Node(5);
root->right->left=new Node(6);
root->right->right=new Node(7);
pre(root);
cout<<endl;
in(root);
cout<<endl;
post(root);

}