#include <iostream>
#include <queue>
using namespace std;

struct Node {
  int data;  
    Node*left;
    Node*right;
    Node(int v) {data = v; left = right = NULL; }
};
int treeHeight(Node*root) {
    if(root == NULL) return -1; 
    int leftH = treeHeight(root->left); 
    int rightH = treeHeight(root->right);
    return max(leftH, rightH) + 1;
}
int main() {
    Node*root = new Node(1);
    root->left = new Node(5);
    root->right = new Node(8);
    root->left->left = new Node(4);
    root->left->right = new Node(7);
    root->right->left = new Node(90);
    cout << "Height of tree=" << treeHeight(root);
    return 0;
}
