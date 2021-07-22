// Question Link : https://www.geeksforgeeks.org/construct-bst-from-given-preorder-traversa/

#include <bits/stdc++.h>
using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;
};

node* newNode(int data)
{
	node* temp = new node();

	temp->data = data;
	temp->left = temp->right = NULL;

	return temp;
}

int idx = 0;
node * constructTree(int pre[],int size,int mini,int maxi){
    if(idx>=size || pre[idx]>maxi || pre[idx]<mini) return NULL;
    
    node* root = newNode(pre[idx++]);
    root->left = constructTree(pre,size,mini,root->data);
    root->right = constructTree(pre,size,root->data,maxi);
    
    return root;
}

void printInorder(node* node)
{
	if (node == NULL)
		return;
	printInorder(node->left);
	cout << node->data << " ";
	printInorder(node->right);
}

// Driver code
int main()
{
	int pre[] = { 10, 5, 1, 7, 40, 50 };
	int size = sizeof(pre) / sizeof(pre[0]);

	node* root = constructTree(pre, size,INT_MIN,INT_MAX);

	cout << "Inorder traversal of the constructed tree: \n";
	printInorder(root);

	return 0;
}

// This code is contributed by rathbhupendra
