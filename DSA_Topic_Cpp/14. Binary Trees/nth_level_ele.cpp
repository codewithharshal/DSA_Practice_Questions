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

void nthLevelElelemt(treeNode *root, int n)
{
    if (n == 3)
    {
        cout << root->val << " ";
        return;
    }
    nthLevelElelemt(root->left, n + 1);
    nthLevelElelemt(root->right, n + 1);
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
    nthLevelElelemt(a, 1);
}