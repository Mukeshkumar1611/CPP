// Take Input level wise

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
    cout << "Enter root data" << endl;
    cin >> rootData;

    TreeNode<int> *root = new TreeNode<int>(rootData);
    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);

    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();

        int numChild;
        cout << "Enter number of chidren of " << root->data << endl;
        cin >> numChild;

        for (int i = 0; i < numChild; i++)
        {
            int childr;
            cout << "Enter " << i << "th child of " << front->data << endl;
            cin >> childr;

            TreeNode<int> *child = new TreeNode<int>(childr);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

int main()
{
    TreeNode<int> *root = takeInput();
    return 0;
}
