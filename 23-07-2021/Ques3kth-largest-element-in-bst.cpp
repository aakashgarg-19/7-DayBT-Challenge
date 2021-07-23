// Question Link : https://practice.geeksforgeeks.org/problems/kth-largest-element-in-bst/1#


// Solution Only :

// class Solution
// {
//     public:
//     void inorder(Node *root,vector<int> &io){
//         if(!root) return;
//         inorder(root->left,io);
//         io.push_back(root->data);
//         inorder(root->right,io);
//         return;
//     }
//     int kthLargest(Node *root, int K)
//     {
//         vector<int> io;
//         inorder(root,io);
//         return io[io.size()-K];
//     }
// };