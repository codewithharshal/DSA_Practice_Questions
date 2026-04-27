#include <iostream>
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

int levels(treeNode *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(levels(root->left), levels(root->right));
}

void nthLevelElelemt(treeNode *root, int curr, int level)
{
    if (root == NULL)
        return;
    if (curr == level)
    {
        cout << root->val << " ";
        return;
    }
    nthLevelElelemt(root->left, curr + 1, level);
    nthLevelElelemt(root->right, curr + 1, level);
}

void levelOrder(treeNode *root)
{
    int n = levels(root);
    for (int i = 1; i <= n; i++)
    {
        nthLevelElelemt(root, 1, i);
    }
}
int main()
{
    treeNode *a = new treeNode(1);
    treeNode *b = new treeNode(2);
    treeNode *c = new treeNode(3);
    treeNode *d = new treeNode(4);
    treeNode *e = new treeNode(5);
    treeNode *f = new treeNode(6);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    levelOrder(a);
}