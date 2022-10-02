// Pair sum in a BST

#include <iostream>
#include <queue>
#include <bits/stdc++.h>
#include <vector>
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

    ~BinaryTreeNode()
    {
        if (left)
            delete left;
        if (right)
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

void convertToArray(BinaryTreeNode<int> *root, vector<int> &v)
{
    if (root == NULL)
    {
        return;
    }
    v.push_back(root->data);
    convertToArray(root->left, v);
    convertToArray(root->right, v);
}

void printNodesSumToS(BinaryTreeNode<int> *root, int sum)
{
    if (root == NULL)
    {
        return;
    }
    vector<int> v;
    convertToArray(root, v);
    sort(v.begin(), v.end());
    int i = 0;
    int j = v.size() - 1;

    while (i < j)
    {
        if (v[i] + v[j] == sum)
        {
            cout << v[i] << " " << v[j] << endl;
            i++;
            j--;
        }
        else if (v[i] + v[j] > sum)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    BinaryTreeNode<int> *root = takeInput();
    int s;
    cout << "Enter sum : " << endl;
    cin >> s;
    printNodesSumToS(root, s);
    delete root;
}
