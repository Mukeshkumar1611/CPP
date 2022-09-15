// Mirror 

#include <iostream>
#include <queue>
using namespace std;

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
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

void printLevelATNewLine(BinaryTreeNode<int> *root)
{
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        BinaryTreeNode<int> *first = q.front();
        q.pop();
        if (first == NULL)
        {
            if (q.empty())
            {
                break;
            }
            cout << endl;
            q.push(NULL);
            continue;
        }
        cout << first->data << " ";
        if (first->left != NULL)
        {
            q.push(first->left);
        }
        if (first->right != NULL)
        {
            q.push(first->right);
        }
    }
}

void mirrorBinaryTree(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    mirrorBinaryTree(root->left);
    mirrorBinaryTree(root->right);

    BinaryTreeNode<int> *temp = root->left;
    root->left = root->right;
    root->right = temp;
}

int main()
{
    BinaryTreeNode<int> *root = takeInput();
    mirrorBinaryTree(root);
    printLevelATNewLine(root);
}
