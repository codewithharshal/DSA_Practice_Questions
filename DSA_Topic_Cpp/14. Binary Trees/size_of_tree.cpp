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

int size(treeNode *root)
{
    int count = 0;
    if (root == NULL)
        return 0;
    count = 1 + size(root->left) + size(root->right);
    return count;
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
    cout << size(a);
}