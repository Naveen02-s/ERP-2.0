#include <bits/stdc++.h>
using namespace std;

class Node {
	public:
		int data;
		Node* next;
		
		Node(int data) {
			this -> data = data;
			this -> next = NULL;
		}
};

void insertAtHead(Node* &head, int d) {
	
	//create new node
	Node* newNode = new Node(d);

	newNode -> next = head;
	head = newNode;
}

void print(Node* &head) {
	
	Node* temp = head;
	while(temp != NULL) {
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << endl;
}

int main() {
	
	Node* node1 = new Node(10);
	Node* head = node1;
	print(head);

	insertAtHead(head, 5);
	print(head);


}