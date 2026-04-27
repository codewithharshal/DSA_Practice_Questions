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

void preorder(treeNode *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(treeNode *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
void postorder(treeNode *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
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
    preorder(a);
}