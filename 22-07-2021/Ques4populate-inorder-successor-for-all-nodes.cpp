// Question Link : https://practice.geeksforgeeks.org/problems/populate-inorder-successor-for-all-nodes/1#


// Solution Only :
// class Solution
// {
// public:
//     void inorder(Node *root,vector<Node *>&inorderV){
//         if(!root) return;
//         inorder(root->left,inorderV);
//         inorderV.push_back(root);
//         inorder(root->right,inorderV);
//         return;
//     }
//     void populateNext(Node *root){
//         vector<Node *> inorderV;
//         inorder(root,inorderV);
//         for(int i = 0; i<inorderV.size()-1; i++){
//             inorderV[i]->next = inorderV[i+1];
//         }
//     }
// };