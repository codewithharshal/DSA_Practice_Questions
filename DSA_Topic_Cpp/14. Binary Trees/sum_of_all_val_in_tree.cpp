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

int sum(treeNode *root)
{
    if (root == NULL)
        return 0;
    return root->val + sum(root->left) + sum(root->right);
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
    cout << sum(a);
}