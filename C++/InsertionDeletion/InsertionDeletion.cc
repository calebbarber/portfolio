#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

void push(Node** headRef, int newData) {
	Node* newNode = new Node();
	newNode->data = newData;
	newNode->next = *headRef;
	*headRef = newNode;
}

void pop(Node** headRef, int key) {
	Node* temp = *headRef;
	Node* prev = NULL;
	
	// If key is found
	if (temp != NULL && temp->data == key) {
		*headRef = temp->next;
		delete temp;
		return;
	}
	
	// While key is not found
	while (temp != NULL && temp->data != key) {
		prev = temp;
		temp = temp->next;
	}
	
	if (temp == NULL) return;
	
	prev->next = temp->next;
	delete temp;
}

void print(Node* n) {
	while (n != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
	
	cout << endl;
}

int main() {
	Node* head = NULL;
	
	// Hard coded linked list
	// Will print in reverse order
	push(&head, 1);
	push(&head, 0);
	push(&head, 8);
	push(&head, 8);
	push(&head, 2);
	print(head);
	
	// Only delete 1st instance of key detected
	pop(&head, 8);
	pop(&head, 0);
	print(head);
	
	return 0;
}
