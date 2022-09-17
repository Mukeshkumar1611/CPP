// Inorder Traversal

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

void inOrder(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main()
{
    BinaryTreeNode<int> *root = takeInput();
    inOrder(root);
}
