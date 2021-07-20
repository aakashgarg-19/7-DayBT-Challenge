// Question Link : https://practice.geeksforgeeks.org/problems/sum-tree/1#


// Solution Only :
// class Solution
// {
//     public:
//     bool ans = 1;
//     int solve(Node *root){
//         if(!root) return 0;
//         if(ans == 0) return 0;
//         if(!root->right && !root->left) return root->data;
        
//         int a = solve(root->left);
//         int b = solve(root->right);
        
//         if(a+b != root->data) ans = 0;
//         return a+b+root->data;
//     }
//     bool isSumTree(Node* root){
//          solve(root);
//          return ans;
//     }
// };