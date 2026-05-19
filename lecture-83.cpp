// Binary Tree Data Structure
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;
Node* buildTree(vector<int> preorder) {
    idx++;

    if(preorder[idx] == -1){
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder); // left
    root->right = buildTree(preorder); // right

    return root;
};

//preorder traversal
void preOrder(Node* root){ //TC: O(n)
    if(root == NULL){
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

//inorder traversal
void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

//postorder traversal
void postOrder(Node* root){
    if(root == NULL){
        return; 
        }
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
}

//level order traversal
void levelOrder(Node* root) {
    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(q.size() > 0){
        Node* curr = q.front();
        q.pop();
         
        if(curr == NULL) {
            if(!q.empty()) {
                cout << endl;
                q.push(NULL);
                continue;
            } else {
                break;
            }
        }
        cout << curr-> data << " ";

        if(curr->left != NULL) {
            q.push(curr->left);
        }
        if(curr->right != NULL) {
            q.push(curr->right);
        }
    }

    cout << endl;
}

int main(){

      vector<int> preorder ={1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

      Node* root = buildTree(preorder);

         levelOrder(root);
    //   postOrder(root); //2,4,5,3,1
    //   inorder(root); // 2,1,4,3,5
    //   preOrder(root); // 1,2,3,4,5
    //      cout << endl;

    //   cout << root->data << endl;
    //   cout << root->left->data << endl;
    //   cout << root->right->data << endl;

      return 0;
}