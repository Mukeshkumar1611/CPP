// Print Binary Tree(Level wise)

#include <iostream>
#include <queue>
using namespace std;

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode *left;
    BinaryTreeNode *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
    ~BinaryTreeNode()
    {
        delete left;
        delete right;
    }
};

BinaryTreeNode<int> *takeInput()
{
    int rootData;
    cout << "Enter root data" << endl;
    cin >> rootData;
    if (rootData == -1)
    {
        return NULL;
    }

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);

    while (pendingNodes.size() != 0)
    {
        BinaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();

        int leftChild;
        cout << "Enter left child of " << front->data << endl;
        cin >> leftChild;
        if (leftChild != -1)
        {
            BinaryTreeNode<int> *leftC = new BinaryTreeNode<int>(leftChild);
            front->left = leftC;
            pendingNodes.push(leftC);
        }

        int rightChild;
        cout << "Enter right child of " << front->data << endl;
        cin >> rightChild;
        if (rightChild != -1)
        {
            BinaryTreeNode<int> *rightC = new BinaryTreeNode<int>(rightChild);
            front->right = rightC;
            pendingNodes.push(rightC);
        }
    }
    return root;
}

void printLevelWise(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<BinaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (!pendingNodes.empty())
    {
        BinaryTreeNode<int> *frontNode = pendingNodes.front();
        pendingNodes.pop();

        if (frontNode == NULL)
        {
            cout << endl;
            if (!pendingNodes.empty())
            {
                pendingNodes.push(NULL);
            }
        }
        else
        {
            cout << frontNode->data << ":";
            cout << "L:";
            if (frontNode->left)
            {
                pendingNodes.push(frontNode->left);
                cout << frontNode->left->data << ",";
            }
            else
            {
                cout << -1 << ",";
            }
            cout << "R:";
            if (frontNode->right)
            {
                pendingNodes.push(frontNode->right);
                cout << frontNode->right->data << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
}

int main()
{
    BinaryTreeNode<int> *root = takeInput();
    printLevelWise(root);
    return 0;
}
