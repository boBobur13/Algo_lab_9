#include <iostream>
using namespace std;
struct Node {
    int data;
    Node*left;
    Node*right;
    Node(int v) { data = v; left = right = NULL; }
};
int countNodes(Node*root) {
    if(root == NULL) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}   
int main() {
    Node*root = new Node(1);
    root->left = new Node(5); 
    root->right = new Node(8);
    root->left->left = new Node(4);
    root->left->right = new Node(7);
    root->right->left = new Node(90);
    cout << "Total nodes= " <<countNodes(root) <<endl; 
    return 0;
}
