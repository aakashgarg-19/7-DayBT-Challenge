// Question Link :  https://practice.geeksforgeeks.org/problems/preorder-to-postorder4423/1#


// Solution Only : 

// int constructBST(vector<int> &pre,int n,int pos,Node *curr,int left,int right){
//     if(pos == n || pre[pos]<left || pre[pos]>right) return pos;
    
//     if(pre[pos] < curr -> data){
//         curr->left = newNode(pre[pos]);
//         pos++;
//         pos = constructBST(pre,n,pos,curr->left,left,curr->data-1);
//     }
//     if(pos == n || pre[pos]<left || pre[pos]>right) return pos;
//     curr->right = newNode(pre[pos]);
//     pos++;
//     pos = constructBST(pre,n,pos,curr->right,curr->data+1,right);
//     return pos;
// }

// Node* constructTree(int pre[], int size){
//     vector<int> pre1;
//     for(int i = 0;i<size;i++){
//         pre1.push_back(pre[i]);
//     }
//     if(size == 0){
//         return NULL;
//     }
    
//     Node *root = newNode(pre1[0]);
//     constructBST(pre1,size,1,root,INT_MIN,INT_MAX);
//     return root;
// }