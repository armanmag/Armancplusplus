#include <iostream>

struct TreeNode {
    int value;          
    TreeNode* left;    
    TreeNode* right;   

    explicit TreeNode(int v) : value(v), left(nullptr), right(nullptr) {}
};

int countNodes(TreeNode* root) {
    if (root == nullptr)
        return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);

    int count = countNodes(root);
    std::cout << count << std::endl; 

    return 0;
}
