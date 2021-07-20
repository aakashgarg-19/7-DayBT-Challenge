// Question Link : https://practice.geeksforgeeks.org/problems/minimum-element-in-bst/1#


// Solution Only :
// int minValue(Node* root){
//     Node *curr = root;
//     while(curr->left) curr = curr->left;
//     return curr->data;
// }