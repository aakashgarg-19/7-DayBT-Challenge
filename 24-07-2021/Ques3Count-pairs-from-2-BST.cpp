// Question Link :  https://practice.geeksforgeeks.org/problems/count-bst-nodes-that-lie-in-a-given-range/1


// Solution Only : 

// int getCount(Node *root, int l, int h){
//     if(!root) return 0;
    
//     if(root->data >= l && root->data <= h){
//         return 1 + getCount(root->left,l,h) + getCount(root->right,l,h);
//     }
//     else if(root->data < l){
//         return getCount(root->right,l,h);
//     }
//     else{
//         return getCount(root->left,l,h);
//     }
// }