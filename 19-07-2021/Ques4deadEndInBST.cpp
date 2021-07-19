// Whole code on GFG : https://practice.geeksforgeeks.org/problems/check-whether-bst-contains-dead-end/1#

// Only Solution :

// vector<int> inorderv,leafN;
// void inorder(Node *root){
//     if(root == NULL){
//         return;
//     }
    
//     inorder(root->left);
//     inorderv.push_back(root->data);
//     inorder(root->right);
//     return;
// }
// void leaf(Node *root){
//     if(root == NULL){
//         return;
//     }
//     if(root->left == NULL && root->right == NULL){
//         leafN.push_back(root->data);
//         return;
//     }
//     leaf(root->left);
//     leaf(root->right);
// }
// bool isDeadEnd(Node *root){
//     inorderv = {};
//     leafN = {};
//     inorder(root);
//     leaf(root);
//     if(leafN[0] == 1){
//         if(inorderv[1]==2)
//         return 1;
//     }
//     for(int i = 1;i<leafN.size();i++){
//         int j = 0;
//         while(inorderv[j]!=leafN[i]){
//             j++;
//         }
//         if(j!=0 && j!=(inorderv.size()-1)){
//             if(inorderv[j-1] == leafN[i]-1 && inorderv[j+1] == leafN[i]+1){
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }