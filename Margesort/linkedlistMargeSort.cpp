
#include <iostream>
using namespace std;

struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};



class Solution{
  public:
  
    Node *findMid(Node *head){
        if(head == NULL || head->next == NULL)
            return head;
        
        Node *slow = head;
        Node *fast = head->next;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    Node *merge(Node *head1, Node *head2){
        if(head1 == NULL && head2 == NULL)  return head1;
        if(head1 == NULL)                   return head2;
        if(head2 == NULL)                   return head1;
        
        Node *ans = new Node(-1);
        Node *tail = ans;
        
        while(head1 != NULL && head2 != NULL){
            if(head1->data < head2->data){
                tail->next = head1;
                tail = head1;
                head1 = head1->next;
            }
            else{
                tail->next = head2;
                tail = head2;
                head2 = head2->next;
            }
        }
        
        while(head1 != NULL){
            tail->next = head1;
            tail = head1;
            head1 = head1->next;
        }
        
        while(head2 != NULL){
            tail->next = head2;
            tail = head2;
            head2 = head2->next;
        }
        
        return ans->next;
    }
  
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        // your code here
        if(head == NULL || head->next == NULL)
            return head;
        Node *mid = findMid(head);
        Node *head2 = mid->next;
        mid->next = NULL;
        head = mergeSort(head);
        head2 = mergeSort(head2);
        Node *ans = merge(head, head2);
        return ans;
    }
};