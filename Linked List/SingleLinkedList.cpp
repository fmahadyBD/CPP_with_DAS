#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class SingleLinkedList
{
private:
    Node *head;

public:
    SingleLinkedList()
    {
        head = nullptr;
    }

    void insert(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    bool search(int value)
    {
        if (head == nullptr)
        {
            return false;
        }
        else
        {
            Node *temp = head;
            while (temp != nullptr)
            {
                if (temp->data == value)
                {
                    return true;
                }
                temp = temp->next;
            }
            return false;
        }
    }

    void remove(int value)
    {
        if (head == nullptr)
        {
            cout << "List is empty." << endl;
            return;
        }

        if (head->data == value)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            cout << "Element " << value << " removed from the list." << endl;
            return;
        }

        Node *prev = head;
        Node *curr = head->next;
        while (curr != nullptr)
        {
            if (curr->data == value)
            {
                prev->next = curr->next;
                delete curr;
                cout << "Element " << value << " removed from the list." << endl;
                return;
            }
            prev = curr;
            curr = curr->next;
        }

        cout << "Element " << value << " not found in the list." << endl;
    }
};

int main()
{
    SingleLinkedList list;

    // Insert elements into the linked list
    list.insert(5);
    list.insert(10);
    list.insert(15);
    list.insert(20);

    // Display the linked list

    // Search for an element
    int searchValue = 10;
    if (list.search(searchValue))
    {
        cout << searchValue << " is found in the linked list." << endl;
    }
    else
    {
        cout << searchValue << " is not found in the linked list." << endl;
    }

    // Remove an element
    int removeValue = 15;
    list.remove(removeValue);

    return 0;
}
