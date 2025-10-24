#include <iostream>
#include <queue>
using namespace std;

struct Node {
   int data;
    Node*left;
    Node*right;
    Node(int x) { data = x; left = right = NULL; }
};
void pre(Node*root) {
    if(root == NULL) return;
    cout << root->data << " ";
    pre(root->left);
    pre(root->right);
} 
void in(Node*root) {
    if(root == NULL) return; 
    in(root->left); 
    cout<< root->data << " ";
    in(root->right);
}
void post(Node*root) {
    if(root == NULL) return;
    post(root->left);
   post(root->right);
    cout << root->data << " ";
}

void level(Node*root) {
    if(root == NULL) return;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()) {
    Node*t = q.front();
    q.pop();
    cout << t->data << " ";
    if(t->left == NULL) q.push(t->left);
    if(t->right == NULL) q.push(t->right);

    }
}
int main() {
    Node*root = new Node(1);
    root->left = new Node(5);
    root->right = new Node(8);
    root->left->left = new Node(4);
    root->left->right = new Node(7);
    root->right->left = new Node(90);
    cout << "Preorder: "; pre(root);
    cout << "\nInorder: "; in(root); 
    cout << "\nPostorder: "; post(root);
    cout << "\nLevelorder: "; level(root); 
    return 0;
} 
