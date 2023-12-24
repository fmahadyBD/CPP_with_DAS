#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node *findmid(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *slow = head;
    Node *fast = head->next;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}


Node *marge(Node *head1, Node *head2)
{
    Node *p1 = head1;
    Node *p2 = head2;
    Node *dummyNode = new Node(-1);
    Node *p3 = dummyNode;
    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }
    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    return dummyNode->next;
}
class Solution
{
public:
    Node *margesort(Node *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }
        Node *mid = findmid(head);
        Node *head2 = mid->next;
        mid->next = NULL;
        head = margesort(head);
        head2 = margesort(head2);
        Node *ans = marge(head, head2);
        return ans;
    }
};