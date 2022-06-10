
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *previous;
};

void addAtHead(Node *&head, int val)
{
    Node *newNode = new Node();
    newNode->data = val;
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
    newNode->previous = NULL;
}

void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->previous = NULL;
    head->data = 1;
    head->next = second;

    second->previous = head;
    second->data = 2;
    second->next = third;

    third->previous = second;
    third->data = 3;
    third->next = NULL;

    printList(head);
    cout << endl;
    addAtHead(head, 4);
    cout << "After adding at head: ";
    printList(head);

    return 0;
}
