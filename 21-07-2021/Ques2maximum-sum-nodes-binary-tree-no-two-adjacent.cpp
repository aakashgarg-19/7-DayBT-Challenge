// Question Link : https://www.geeksforgeeks.org/maximum-sum-nodes-binary-tree-no-two-adjacent/


// Code :


#include <bits/stdc++.h>
using namespace std;

/* A binary tree node structure */
struct node
{
	int data;
	struct node *left, *right;
};

/* Utility function to create a new Binary Tree node */
struct node* newNode(int data)
{
	struct node *temp = new struct node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

unordered_map<node*,int> dp;
int getMaxSum(node* root){
    if(!root) return 0;
    if(dp[root]) return dp[root];
    
    int inc = root->data;
    if(root->left){
        inc+=getMaxSum(root->left->left);
        inc+=getMaxSum(root->left->right);
    }
    if(root->right){
        inc+=getMaxSum(root->right->left);
        inc+=getMaxSum(root->right->right);
    }
    
    int exe = getMaxSum(root->left) + getMaxSum(root->right);
    
    dp[root] = max(inc,exe);
    return dp[root];
        
}

// Driver code to test above methods
int main()
{
	node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->right->left = newNode(4);
	root->right->right = newNode(5);
	root->left->left = newNode(1);

	cout << getMaxSum(root) << endl;
	return 0;
}