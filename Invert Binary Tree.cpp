 // struct TreeNode {
 //      int val;
 //      TreeNode *left;
 //      TreeNode *right;
 //      TreeNode() : val(0), left(nullptr), right(nullptr) {}
 //      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 //      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 //  };


void mirror( TreeNode* node)  
{ 
    if (node == NULL)  
        return;  
    else
    { 
        struct TreeNode* temp; 
       
         /* swap the pointers in this node */
        temp     = node->left; 
        node->left = node->right; 
        node->right = temp; 
        
        /* do the subtrees */
        mirror(node->left); 
        mirror(node->right); 
      
       
    } 
}  
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        mirror(root);
        return root;
    }
};