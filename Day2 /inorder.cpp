#include <bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int a){
        val=a;
        left=NULL;
        right=NULL;
    }
};
class solution{
public:
    void inorder(TreeNode* root){
        if(root==NULL)
        return;
        inorder(root->left);
        cout<<root->val<<" ";
        inorder(root->right);
    }
};
int main() {
    // Write C++ code here
    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);
    solution obj;
    obj.inorder(root);
    return 0;
}
