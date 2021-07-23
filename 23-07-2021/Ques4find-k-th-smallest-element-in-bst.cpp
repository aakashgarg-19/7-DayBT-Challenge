// Question Link : https://practice.geeksforgeeks.org/problems/find-k-th-smallest-element-in-bst/1


// Solution Only :

// class Solution{
//   public:
//     // Return the Kth smallest element in the given BST 
//     void inorder(Node *root,vector<int> &io){
//         if(!root) return;
//         inorder(root->left,io);
//         io.push_back(root->data);
//         inorder(root->right,io);
//         return;
//     }
//     int KthSmallestElement(Node *root, int K)
//     {
//         vector<int> io;
//         inorder(root,io);
//         if(io.size()>=K){
//             return io[K-1];
//         }
//         else{
//             return -1;
//         }
//     }
// };
