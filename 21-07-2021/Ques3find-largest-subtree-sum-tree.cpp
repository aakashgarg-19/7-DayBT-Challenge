// Question Link : https://www.geeksforgeeks.org/find-largest-subtree-sum-tree/


// Code :


#include <bits/stdc++.h>
using namespace std;

// Structure of a tree node.
struct Node {
	int key;
	Node *left, *right;
};

// Function to create new tree node.
Node* newNode(int key)
{
	Node* temp = new Node;
	temp->key = key;
	temp->left = temp->right = NULL;
	return temp;
}

int solution(Node *root,int &ans){
    if(root == NULL){
        return 0;
    }
    int a = solution(root->left,ans);
    int b = solution(root->right,ans);
    
    int sum = a + b + root->key;
    ans = max(ans,sum);
    return sum;
}

int findLargestSubtreeSum(Node* root){
    if(!root) return 0;
    int ans = INT_MIN;
    solution(root,ans);
    return ans;
}

// Driver function
int main()
{
	/*
			1
			/ \
			/	 \
		-2	 3
		/ \	 / \
		/ \ / \
		4	 5 -6	 2
	*/

	Node* root = newNode(1);
	root->left = newNode(-2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(-6);
	root->right->right = newNode(2);

	cout << findLargestSubtreeSum(root);
	return 0;
}

