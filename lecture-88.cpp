// Kth Level of a Binary Tree
// #include <iostream>
// #include <vector>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val)
//     {
//         data = val;
//         left = right = NULL;
//     }
// };

//  int idx = -1;
//  // Build Binary Tree
// Node* buildTree(vector<int>& preorder) {
//     idx++;

//     if (idx >= preorder.size()) {
//         return NULL;
//     }

//     if(preorder[idx] == -1){
//         return NULL;
//     }

//     Node* root = new Node(preorder[idx]);
//     root->left = buildTree(preorder); // left
//     root->right = buildTree(preorder); // right

//     return root;
// };

// //Kth Level of a Binary Tree
// void KthLevel(Node* root, int K){
//     if(root == NULL){
//         return;
//     }

//     if(K == 1){
//         cout << root->data << " ";
//         return;
//     }
    
//     KthLevel(root->left, K-1);
//     KthLevel(root->right, K-1);
// }

// int main() {
//     vector<int> preorder = {1, 2, 7, -1, -1, -1, 3, 4, -1, -1, 5, -1, -1};
//     Node* root = buildTree(preorder);

//     KthLevel(root, 3);
    
//     return 0;
// }


#include <iostream>
#include <vector>
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

int idx = -1;

// Build Binary Tree
Node* buildTree(vector<int>& preorder) {

    idx++;

    // Safety check
    if (idx >= preorder.size()) {
        return NULL;
    }

    // NULL node
    if (preorder[idx] == -1) {
        return NULL;
    }

    // Create node
    Node* root = new Node(preorder[idx]);

    // Build left subtree
    root->left = buildTree(preorder);

    // Build right subtree
    root->right = buildTree(preorder);

    return root;
}

// Print Kth Level
void KthLevel(Node* root, int K) {

    if (root == NULL) {
        return;
    }

    // Reached Kth level
    if (K == 1) {
        cout << root->data << " ";
        return;
    }

    KthLevel(root->left, K - 1);
    KthLevel(root->right, K - 1);
}

int main() {

    vector<int> preorder = {1, 2, 7, -1, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = buildTree(preorder);

    KthLevel(root, 3);

    return 0;
}