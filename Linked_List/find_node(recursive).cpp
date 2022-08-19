// Find a node in LL (recursive)

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

Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
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

int findNodeRec(Node *head, int val)
{
    if (head == NULL)
    {
        return -1;
    }

    if (head->data == val)
    {
        return 0;
    }
    int smallAns = findNodeRec(head->next, val);
    if (smallAns == -1)
    {
        return -1;
    }
    return smallAns + 1;
}

int main()
{
    cout << "Enter nodes : ";
    Node *head = takeinput();
    int val;
    cout << "Enter val : ";
    cin >> val;
    cout << findNodeRec(head, val) << endl;
}
