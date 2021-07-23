// Question Link : https://www.geeksforgeeks.org/convert-normal-bst-balanced-bst/

#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* left, *right;
};

void preOrder(Node* node)
{
	if (node == NULL)
		return;
	printf("%d ", node->data);
	preOrder(node->left);
	preOrder(node->right);
}


void inorder(Node *root,vector<Node *> &io){
    if(!root) return;
    inorder(root->left,io);
    io.push_back(root);
    inorder(root->right,io);
    return;
}

Node *buildBalancedTree(vector<Node *> io,int start,int end){
    if(start > end) return NULL;
    int mid = (start+end)/2;
    Node *root = io[mid];
    root->left = buildBalancedTree(io,start,mid-1);
    root->right = buildBalancedTree(io,mid+1,end);
    return root;
}

Node *buildTree(Node *root){
    vector<Node *> io;
    inorder(root,io);
    Node *root1 = buildBalancedTree(io,0,io.size()-1);
    return root1;
}

Node* newNode(int data)
{
    Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}

int main()
{
	Node* root = newNode(10);
	root->left = newNode(8);
	root->left->left = newNode(7);
	root->left->left->left = newNode(6);
	root->left->left->left->left = newNode(5);

	root = buildTree(root);

	printf("Preorder traversal of balanced "
			"BST is : \n");
	preOrder(root);

	return 0;
}
