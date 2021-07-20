// Question Link : https://practice.geeksforgeeks.org/problems/predecessor-and-successor/1#


// Solution Only :
// Node *predecessor(Node *root){
//     Node *curr = root->left;
//     while(curr->right) curr = curr->right;
//     return curr;
// }
// Node *successor(Node *root){
//     Node *curr = root->right;
//     while(curr->left) curr = curr->left;
//     return curr;
// }

// void findPreSuc(Node* root, Node*& pre, Node*& suc, int key){
//     if(!root) return;
//     if(root->key == key){
//         if(root->left) pre = predecessor(root);
//         if(root->right) suc = successor(root);
//     }
    
//     else{
//         if(root->key > key){
//             suc = root;
//             findPreSuc(root->left,pre, suc,key);
//         }
//         else{
//             pre = root;
//             findPreSuc(root->right,pre, suc,key);
//         }
//     }
//     return;
// }