#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* findMid(Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    Node* slow = head;
    Node* fast = head->next;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* merge(Node* head1, Node* head2) {
    Node* p1 = head1;
    Node* p2 = head2;
    Node* dummyNode = new Node(-1);
    Node* p3 = dummyNode;
    while (p1 != NULL && p2 != NULL) {
        if (p1->data < p2->data) {
            p3->next = p1;
            p1 = p1->next;
        }
        else {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }
    while (p1 != NULL) {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while (p2 != NULL) {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    return dummyNode->next;
}

class Solution {
public:
    Node* mergeSort(Node* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        Node* mid = findMid(head);
        Node* head2 = mid->next;
        mid->next = NULL;
        head = mergeSort(head);
        head2 = mergeSort(head2);
        Node* ans = merge(head, head2);
        return ans;
    }
};

void printList(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    // Create a sample linked list
    Node* head = new Node(3);
    head->next = new Node(1);
    head->next->next = new Node(2);
    head->next->next->next = new Node(5);
    head->next->next->next->next = new Node(4);

    cout << "Original linked list: ";
    printList(head);

    // Create an instance of the Solution class
    Solution solution;

    // Sort the linked list using merge sort
    Node* sortedList = solution.mergeSort(head);

    cout << "Sorted linked list: ";
    printList(sortedList);

    return 0;
}
