// Question Link : https://practice.geeksforgeeks.org/problems/largest-bst/1#


// Solution Only :

// vector<int> solve(Node *root){
//     if(!root) return {1,0,INT_MAX,INT_MIN};
//     if(!root->left && !root->right) return {1,1,root->data,root->data};

//     vector<int> left = solve(root->left);
//     vector<int> right = solve(root->right);

//     if(left[0] && right[0]){
//         if(root->data > left[3] && root->data < right[2]){
//             int x = left[2],y = right[3];
//             if(x == INT_MAX) x = root->data;
//             if(y == INT_MIN) y = root->data;
//             return {1,left[1]+right[1]+1,x,y};
//         }
//     }
//     return {0,max(left[1],right[1]),0,0};

// }
// int largestBst(Node *root){
// 	vector<int> ans = solve(root);
// 	return ans[1];
// }