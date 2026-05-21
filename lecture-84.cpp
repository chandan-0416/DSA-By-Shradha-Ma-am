//Height of a Tree
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

// Height of a Binaryn Tree
int height(Node* root){ 
    if(root == NULL){
        return 0;
    }

    int leftHt = height(root->left);
    int rightHt = height(root->right);
    return max(leftHt, rightHt) + 1;

}

// Count Nodes
int count(Node* root){
    if(root == NULL){
        return 0;
    }

    int leftCount = count(root->left);
    int rightCount = count(root->right);
    return leftCount + rightCount + 1;
}

//sum of Nodes
int  sumOfNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    
    int leftSum = sumOfNodes(root->left);
    int rightSum = sumOfNodes(root->right);
    return leftSum + rightSum + root->data;
}

int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = buildTree(preorder);
    
    cout << "sum : " << sumOfNodes(root) <<endl;
    
    //cout << "count : " << count(root) << endl;

    //cout << "height : " << height(root) << endl;
    return 0;
}