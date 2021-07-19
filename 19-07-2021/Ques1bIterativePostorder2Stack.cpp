#include <iostream>
#include <stack>
using namespace std;

struct TreeNode{
    char val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(char data){
        val = data;
        left = NULL;
        right = NULL;
    }
};

void postorder_traversal(TreeNode *root){
    stack<TreeNode*> st1;
    stack<TreeNode*> st2;
    TreeNode *curr = NULL;

    st1.push(root);
    while (!st1.empty()){
        curr = st1.top();
        st1.pop();
        st2.push(curr);
        if (curr->left != NULL)
            st1.push(curr->left);
        if (curr->right != NULL)
            st1.push(curr->right);
    }
    while (!st2.empty()){
        curr = st2.top();
        cout << curr->val << " ";
        st2.pop();
    }
}

int main(){

    TreeNode* root = new TreeNode('1');
    root->left = new TreeNode('2');
    root->left->left = new TreeNode('3');
    root->left->right = new TreeNode('4');
    root->left->right->left = new TreeNode('5');
    root->right = new TreeNode('6');
    root->right->right = new TreeNode('7');
    root->right->right->right = new TreeNode('8');

    cout << "Postorder Traversal using two stacks: ";
    postorder_traversal(root);
    cout << endl;
    return 0;
}