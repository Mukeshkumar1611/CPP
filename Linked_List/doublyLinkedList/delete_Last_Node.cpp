#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *previous;
};

void deleteLastNode(Node* &head)
{
    Node *currNode = head;
    while (currNode->next->next != NULL)
    {
        currNode = currNode->next;
    }
    Node *todelete = currNode->next;
    currNode->next = NULL;
    delete todelete;
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
    deleteLastNode(head);
    cout <<"After Deleting last node : ";
    printList(head);

    return 0;
}
