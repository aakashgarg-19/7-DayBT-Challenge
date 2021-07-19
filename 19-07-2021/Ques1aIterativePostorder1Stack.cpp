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

    stack<TreeNode*> st;
    TreeNode *curr = root;
    TreeNode *prev = NULL;
    while (curr != NULL || !st.empty()){

        if (curr != NULL){
            st.push(curr);
            curr = curr->left;
        }
        else{
            curr = st.top();
            if (curr->right == NULL || curr->right == prev)
            {
                cout << curr->val << " ";
                st.pop();
                prev = curr;
                curr = NULL;
            }
            else
                curr = curr->right;
        }
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

    cout << "Postorder Traversal using one stack: ";
    postorder_traversal(root);
    cout << endl;
    return 0;
}