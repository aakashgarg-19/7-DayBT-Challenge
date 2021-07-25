// Replace every element with the least greater element on its right

#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node *left, *right;
};

Node* newNode(int item){
	Node* temp = new Node;
	temp->data = item;
	temp->left = temp->right = NULL;

	return temp;
}

Node* insert(Node* root, int data, Node*& succ){
    if(!root){
        root = newNode(data);
        return root;
    }
    
    if(root->data > data){
        succ = root;
        root->left = insert(root->left,data,succ);
    }
    else{
        root->right = insert(root->right,data,succ);
    }
    return root;
}

void replace(int arr[], int n){
	Node *root = NULL;
	for(int i = n-1;i>=0;i--){
	    Node *succ = NULL;
	    root = insert(root,arr[i],succ);
	    if(!succ){
	        arr[i] = -1;
	    }
	    else{
	        arr[i] = succ->data;
	    }
	}
}

// Driver Program to test above functions
int main()
{
	int arr[] = { 8, 58, 71, 18, 31, 32, 63, 92,
				43, 3, 91, 93, 25, 80, 28 };
	int n = sizeof(arr) / sizeof(arr[0]);

	replace(arr, n);

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	return 0;
}
