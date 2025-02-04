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

void insertAtTail(Node* &tail, int d) {
	
	//create new node
	Node* newNode = new Node(d);

  tail -> next = newNode;
	tail = newNode;
}

void insertAtMiddle(Node* &head, Node* &tail, int d, int posi) {

  if(posi == 1) {
    insertAtHead(head, d);
    return;
  }

  Node* temp = head;
  int cnt = 1;

  while(cnt < posi-1){
    temp = temp -> next;
    cnt++;
  }

  //Insert at last posi
  if(temp -> next == NULL) {
    insertAtTail(tail, d);
    return;
  }

  //create new node
	Node* newNode = new Node(d);

  newNode -> next = temp -> next;
  temp -> next = newNode;
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
	Node* tail = node1;

	print(head);

  insertAtHead(head, 5);
	print(head);

	insertAtTail(tail, 15);
	print(head);

  insertAtTail(tail, 30);
	print(head);

  insertAtTail(tail, 35);
	print(head);

  int posi;
  cout << "At which position ?";
  cin >> posi;

  insertAtMiddle(head, tail, 50, posi);
  print(head);

}