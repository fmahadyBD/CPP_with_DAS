#include<iostream>
using namespace std;
struct Node{
    int data;
   struct Node* left;
   struct Node*right;
    Node(int x){
    data=x;
    left=NULL;
    right=NULL;
   }
};

int main(){
    struct Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);


}