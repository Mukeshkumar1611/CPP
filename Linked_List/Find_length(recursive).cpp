// To find length(recursively)

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *takeInput()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

int length(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    return length(head->next) + 1;
}

int main()
{
    cout << "Enter nodes : ";
    Node *head = takeInput();

    cout << "Length : " << length(head);
    return 0;
}
