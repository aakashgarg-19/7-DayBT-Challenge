// Whole code on GFG : https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1

// Only Solution :

// class Solution {
// public:
//     void leftb(Node *root,vector<int> &ans){
//         if(root == NULL) return;
        
//         if(root->left != NULL){
//             ans.push_back(root->data);
//             leftb(root->left,ans);
//         }
//         else if(root->right != NULL){
//             ans.push_back(root->data);
//             leftb(root->right,ans);
//         }
        
//         return;
//     }
    
//     void leafN(Node *root,vector<int> &ans){
//         if(root == NULL) return;
        
//         if(root->left == NULL && root->right == NULL){
//             ans.push_back(root->data);
//             return;
//         }
        
//         leafN(root->left,ans);
//         leafN(root->right,ans);
        
//         return;
//     }
    
//     void reverseRightB(Node *root,vector<int> &ans){
//         if(root == NULL) return;
        
//         if(root->right != NULL){
//             reverseRightB(root->right,ans);
//             ans.push_back(root->data);
//         }
//         else if(root->left != NULL){
//             reverseRightB(root->left,ans);
//             ans.push_back(root->data);
//         }
        
//         return;
//     }
    
//     vector <int> printBoundary(Node *root){
//         vector<int> ans;
//         ans.push_back(root->data);
//         if(root->left == NULL && root->right == NULL){
//             return ans;
//         }
//         leftb(root->left,ans);
//         leafN(root,ans);
//         reverseRightB(root->right,ans);
//         return ans;
//     }
// };