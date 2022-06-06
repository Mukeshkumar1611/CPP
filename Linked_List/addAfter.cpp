
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void addAfter(Node *previous, int val)
{
    Node *newNode = new Node();
    if (previous == NULL)
    {
        cout << "Previous cant be NULL.";
        return;
    }
    newNode->data = val;
    newNode->next = previous->next;
    previous->next = newNode;
}

void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printList(head);
    cout << endl;
    addAfter(head, 2);
    printList(head);

    return 0;
}
