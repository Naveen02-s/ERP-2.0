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

    ~Node (){
      if(this -> next != NULL) {
        delete next;
        this -> next = NULL;
      }
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

void deleteNode(int posi, Node* &head, Node* &tail) {

  //deleting first node
  if(posi == 1) {

    Node* temp = head;
    head = head -> next;

    temp -> next = NULL;
    delete temp;

  }
  //deleting any middle or last node
  else {

    Node* curr = head;
    Node* prev = NULL;

    int cnt = 1;

    while(cnt < posi) {
      prev = curr;
      curr = curr -> next;
      cnt++;
    }

    //handling tail on deleting last node 
    if(curr -> next == NULL) {
      tail = prev;
    }

    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr;

  }
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

	insertAtTail(tail, 15);

  insertAtTail(tail, 30);

  insertAtTail(tail, 35);

  print(head);

  int posi;
  cout << "At which position ?";
  cin >> posi;

  deleteNode(posi, head, tail);

  print(head);

}