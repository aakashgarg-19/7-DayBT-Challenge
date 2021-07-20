// Question Link : https://practice.geeksforgeeks.org/problems/leaf-at-same-level/1#


// Solution Only :
// class Solution{
//   public:
//     bool ans = 1;
//     void solve(Node *root,int level,int &prev){
//         if(root == NULL) return;
//         if(root->right == NULL && root->left == NULL){
//             if(prev == -1) prev = level;
//             else{
//                 if(prev != level) ans = 0;
//             }
//         }
//         if(ans == 0) return;
        
//         solve(root->left,level+1,prev);
//         solve(root->right,level+1,prev);
//     }
//     /*You are required to complete this method*/
//     bool check(Node *root){
//         int level = 0,prev = -1;
//         solve(root,level,prev);
//         return ans;
//     }
// };