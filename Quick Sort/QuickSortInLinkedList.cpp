#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    
    node(int x){
        data = x;
        next = NULL;
    }
};

struct node* partition(struct node* low, struct node* high) {
    int pivot = low->data;
    struct node* ind = low;
    
    for(struct node* j = low->next; j != high; j = j->next) {
        if(j->data < pivot){
            ind = ind->next;
            swap(ind->data, j->data);
        }
    }
    
    swap(low->data, ind->data);
    return ind;
}

void solve(struct node* head, struct node* end){
    if(head==end || head->next==end) {
        return;
    }
    struct node* pivot = partition(head, end);
    solve(head, pivot);
    solve(pivot->next, end);
}

void quickSort(struct node **headRef) {
    node* head = *headRef;
    solve(head, NULL);
}

// Utility function to print the linked list
void printList(struct node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    struct node* head = new node(9);
    head->next = new node(7);
    head->next->next = new node(5);
    head->next->next->next = new node(11);
    head->next->next->next->next = new node(12);
    head->next->next->next->next->next = new node(2);

    cout << "Original linked list: ";
    printList(head);

    quickSort(&head);

    cout << "Sorted linked list: ";
    printList(head);

    return 0;
}
