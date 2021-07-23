// Question Link : https://www.geeksforgeeks.org/merge-two-balanced-binary-search-trees/

#include<bits/stdc++.h>
using namespace std;

class node
{
	public:
	int data;
	node* left;
	node* right;
};

void inorder(node *root,vector<node *> &io){
    if(!root) return;
    inorder(root->left,io);
    io.push_back(root);
    inorder(root->right,io);
    return;
}

node *buildBalancedTree(vector<node *> io,int start,int end){
    if(start > end) return NULL;
    int mid = (start+end)/2;
    node *root = io[mid];
    root->left = buildBalancedTree(io,start,mid-1);
    root->right = buildBalancedTree(io,mid+1,end);
    return root;
}

bool comNode(node* i1, node* i2)
{
    return (i1->data < i2->data);
}

node* mergeTrees(node *root1, node *root2, int m, int n){
    vector<node *> io1,io2;
    inorder(root1,io1);
    inorder(root2,io2);
    for(int i = 0; i<io2.size(); i++){
        io1.push_back(io2[i]);
    }
    sort(io1.begin(),io1.end(),comNode);
    return buildBalancedTree(io1,0,io1.size()-1);
}

node* newNode(int data)
{
	node* Node = new node();
	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;

	return(Node);
}

void printInorder(node* node)
{
	if (node == NULL)
		return;

	printInorder(node->left);

	cout << node->data << " ";

	printInorder(node->right);
}

int main()
{
	
	node *root1 = newNode(100);
	root1->left	 = newNode(50);
	root1->right = newNode(300);
	root1->left->left = newNode(20);
	root1->left->right = newNode(70);

	node *root2 = newNode(80);
	root2->left	 = newNode(40);
	root2->right = newNode(120);

	node *mergedTree = mergeTrees(root1, root2, 5, 3);

	cout << "Following is Inorder traversal of the merged tree \n";
	printInorder(mergedTree);

	return 0;
}
