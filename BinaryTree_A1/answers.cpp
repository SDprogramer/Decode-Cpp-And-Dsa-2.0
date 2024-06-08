/* 
3 ->
class Solution {
public:
    int depth( TreeNode* root )
    {
        if( root==NULL ) return 0;
        int left = depth( root->left );
        if( left==-1 ) return -1;
        int right = depth( root->right );
        if( right==-1 ) return -1;
        if( abs( left - right )>1 ) return -1;
        return max( left, right ) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if( root==NULL ) return true;
        return ( depth( root )!=-1 );
    }
};


4 ->
class Solution {
public:
    bool isMirror( TreeNode* left, TreeNode* right ) 
    {
        if( left==NULL && right==NULL ) return true;
        if( left==NULL || right==NULL ) return false;
        if( left->val!=right->val ) return false;
        return isMirror( left->left, right->right ) && isMirror( left->right, right->left );
    }
    bool isSymmetric(TreeNode* root) {
        if( root==NULL ) return true;
        return isMirror( root->left, root->right );
    }
};
*/