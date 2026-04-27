#include <iostream>
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

void levelOrderQueue(treeNode *root)
{
    queue<treeNode *> q;
    q.push(root);
    while (q.size() > 0)
    {
        treeNode *temp = q.front();
        q.pop();
        cout << temp->val << " ";
        if (temp->left != NULL)
            q.push(temp->left);
        if (temp->right != NULL)
            q.push(temp->right);
    }
    cout << endl;
}

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
    levelOrderQueue(a);
}