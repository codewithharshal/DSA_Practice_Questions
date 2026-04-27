#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class treeNode
{
public:
    int val;
    treeNode *left;
    treeNode *right;

    treeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void display(treeNode *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    display(root->left);
    display(root->right);
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, INT8_MIN, 6, INT8_MIN, INT8_MIN, 7, 8, 9, INT8_MIN};
    queue<treeNode *> q;
    int i = 1;
    int j = 2;

    treeNode *root = new treeNode(v[0]);
    q.push(root);

    while (q.size() > 0 && i < v.size())
    {
        treeNode *temp = q.front();
        q.pop();

        treeNode *leftNode;
        treeNode *rightNode;

        if (v[i] != INT8_MIN)
            leftNode = new treeNode(v[i]);
        else
            leftNode = NULL;

        if (j <= v.size() && v[j] != INT8_MIN)
            rightNode = new treeNode(v[j]);
        else
            rightNode = NULL;

        temp->left = leftNode;
        temp->right = rightNode;

        if (leftNode != NULL)
            q.push(leftNode);
        if (rightNode != NULL)
            q.push(rightNode);

        i += 2;
        j += 2;
    }

    display(root);
}