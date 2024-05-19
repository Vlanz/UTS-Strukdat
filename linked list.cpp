#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};
typedef Node* nodePtr;

int main()
{
	nodePtr head;
	head = new Node;
	head -> data = 20;
	head -> next = NULL;
	cout << head->data << endl;

	// Create a new node
	nodePtr newNode;
	newNode = new Node;
	newNode -> data = 23;
	newNode -> next = NULL;
	head -> next = newNode;
	cout << head->next->data << endl;

	return 0;
}
