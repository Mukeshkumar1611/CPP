
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void printList(Node *&head)
{
    Node *currNode = head;
    do
    {
        cout << currNode->data << " ";
        currNode = currNode->next;
    } while (currNode != head);
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
    third->next = head;

    printList(head);

    return 0;
}
