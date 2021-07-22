// Question Link : https://practice.geeksforgeeks.org/problems/binary-tree-to-bst/1

// Solution Only :

// class Solution{
//   public:
//     // The given root is the root of the Binary Tree
//     // Return the root of the generated BST
//     void inorder(Node *root,vector<Node *>&inorderV){
//         if(!root) return;
//         inorder(root->left,inorderV);
//         inorderV.push_back(root);
//         inorder(root->right,inorderV);
//     }
//     Node *binaryTreeToBST (Node *root){
//         vector<Node *> inorderV;
//         inorder(root,inorderV);
//         vector<int> dataInorder;
//         for(int i = 0;i<inorderV.size(); i++){
//             dataInorder.push_back(inorderV[i]->data);
//         }
//         sort(dataInorder.begin(),dataInorder.end());
//         for(int i = 0;i<inorderV.size(); i++){
//             inorderV[i]->data = dataInorder[i];
//         }
//         return root;
//     }
// };