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

int maxDepth(Node* root) {
	if (root == NULL) return 0;
	
	int lDepth = maxDepth(root->left);
	int rDepth = maxDepth(root->right);
	
	if (lDepth > rDepth) return lDepth+1;
	
	return rDepth+1;
}

int main() {
	Node* root = new Node(1);
	
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->right->left = new Node(5);
	root->right->right = new Node(6);
	root->right->right->left = new Node(8);
	root->right->left->right = new Node(7);
	
	cout << "Max depth: " << maxDepth(root) << endl;
	
	return 0;
}
