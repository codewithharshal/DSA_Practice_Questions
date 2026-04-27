#include <iostream>
#include <vector>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode *searchBST(TreeNode *root, int val)
{
    if (root->val == val)
        return root;
    if (root->val > val)
        searchBST(root->left, val);
    else if (root->val < val)
        searchBST(root->right, val);
}

int main()
{
    // Test case 1: Simple BST
    TreeNode *root1 = new TreeNode(4);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(7);
    root1->left->left = new TreeNode(1);
    root1->left->right = new TreeNode(3);

    // Search for 2
    TreeNode *result1 = searchBST(root1, 2);
    if (result1)
    {
        std::cout << "Found: " << result1->val << std::endl;
    }
    else
    {
        std::cout << "Not found" << std::endl;
    }

    // Test case 2: Search for non-existing value
    TreeNode *result2 = searchBST(root1, 5);
    if (result2)
    {
        std::cout << "Found: " << result2->val << std::endl;
    }
    else
    {
        std::cout << "Not found" << std::endl;
    }

    // Add more test cases as needed

    return 0;
}