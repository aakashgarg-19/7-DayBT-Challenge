// Question Link : https://practice.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1#


// Solution Only :
// class Solution
// {
// public:
//     vector<int> sol(Node *root){
//         if(!root) return {0,0};
//         vector<int> a = sol(root->left);
//         vector<int> b = sol(root->right);
        
//         if(a[0] == b[0]){
//             return {a[0]+1,max(a[1],b[1])+root->data};
//         }
//         else if(a[0] > b[0]){
//             return {a[0]+1,a[1]+root->data};
//         }
//         else{
//             return {b[0]+1,b[1]+root->data};
//         }
//     }
//     int sumOfLongRootToLeafPath(Node *root){
//         vector<int> ans = sol(root);
//         return ans[1];
//     }
// };