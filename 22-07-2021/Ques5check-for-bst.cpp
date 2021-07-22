// Question Link : https://practice.geeksforgeeks.org/problems/check-for-bst/1


// Solution Only :

// class Solution
// {
//     public:
//     //Function to check whether a Binary Tree is BST or not.
//     void checkBST(Node *root,int mini,int maxi,bool &ans){
//         if(!root) return;
//         if(ans == 0) return;
//         if(root->data > mini && root->data < maxi) ans = 1;
//         else ans = 0;
//         checkBST(root->left,mini,root->data,ans);
//         checkBST(root->right,root->data,maxi,ans);
        
//     }
//     bool isBST(Node* root) {
//         bool ans = true;
//         checkBST(root,INT_MIN,INT_MAX,ans);
//         return ans;
//     }
// };
