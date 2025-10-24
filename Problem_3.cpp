#include <iostream>
using namespace std;

struct Node {
   int data; 
    Node*left;
    Node*right;
    Node(int v) { data = v; left = right = NULL; }
};
int depthOf(Node*root, int val, int depth = 0) {
   if(root == NULL) return -1;
   if(root->data == val) return depth;
   int left = depthOf(root->left, val, depth + 1);
   if(left != -1) return left; 
    return depthOf(root->right, val, depth + 1);
}
int main() {
    Node*root = new Node(1);
    root->left = new Node(5); 
    root->right = new Node(8);
    root->left->left = new Node(4);
    root->left->right = new Node(7);
    root->right->left = new Node(90);
    cout << "Depth of 1=" << depthOf(root, 1) << endl;
    cout << "Depth of 5=" << depthOf(root, 5) << endl; 
    cout << "Depth of 90=" << depthOf(root, 90) << endl;
    return 0;
}
