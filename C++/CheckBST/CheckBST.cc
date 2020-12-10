#include <iostream>
using namespace std;

class Node {
public:
	int key;
	Node* left;
	Node* right;
	
	Node(int k) {
		this->key = k;
		this->left = NULL;
		this->right = NULL;
	}
};

int check(Node* root, Node* l = NULL, Node* r = NULL) {
	if (root == NULL) return 1;
	if (l != NULL && root->key <= l->key) return 0;
	if (l != NULL && root->key <= l->key) return 0;
	
	return check(root->left, l, root) &&
		check(root->right, root, r);
}

int main() {
	Node* root = new Node(2);
	root->left = new Node(8);
	root->right = new Node(6);
	root->left->left = new Node(0);
	root->left->right = new Node(7);
	
	if (check(root)) cout << "Valid Binary Search Tree\n";
	else cout << "Not a real Binary Search Tree\n";
	
	return 0;
}
