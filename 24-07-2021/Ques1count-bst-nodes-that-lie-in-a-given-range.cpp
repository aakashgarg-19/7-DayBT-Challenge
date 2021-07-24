// Question Link : https://practice.geeksforgeeks.org/problems/brothers-from-different-root/1#


// Solution Only :

// bool finder(int ele,Node *root){
//     if(!root) return 0;
//     if(root->data == ele) return 1;
//     else  if(root->data > ele) return finder(ele,root->left);
//     else return finder(ele,root->right);
// }

// void inorderfinder(Node* root1, Node* root2, int x, int &ans){
//     if(!root1) return;
//     inorderfinder(root1->left,root2,x,ans);
//     if(finder(x-root1->data,root2)){
//         ans++;
//     }
//     inorderfinder(root1->right,root2,x,ans);
// }

// int countPairs(Node* root1, Node* root2, int x){
//     int ans = 0;
//     inorderfinder(root1,root2,x,ans);
//     return ans;
// }