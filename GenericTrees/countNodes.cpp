// Count nodes in generic tree.

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode<int> *> children;

    TreeNode(T data)
    {
        this->data = data;
    }
};

TreeNode<int> *takeInput()
{
    int rootData;
    cout << "Enter root data " << endl;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);
    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);

    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        int numOfChild;
        cout << "Enter number of children of " << front->data << endl;
        cin >> numOfChild;
        for (int i = 0; i < numOfChild; i++)
        {
            int childData;
            cout << "Enter data of " << i << "th child of " << front->data << endl;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

int countNodes(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int count = 1;

    for (int i = 0; i < root->children.size(); i++)
    {
        count += countNodes(root->children[i]);
    }
    return count;
}

int main()
{
    TreeNode<int> *root = takeInput();
    cout << "Total nodes : " << countNodes(root) << endl;
    return 0;
}
