#include<bits/stdc++.h>
using namespace std;

//Doubeley Linked List
class Node {

  public:
  int data;
  Node* prev; 
  Node* next; 

  Node(int data) {
    this -> data = data;
    this -> prev = NULL;
    this -> next = NULL;
  }

};

void print(Node* &head) {

  Node* temp = head;
	while(temp != NULL) {
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << endl;
}

int getLength(Node* &head) {

  Node* temp = head;
  int len = 0;
	while(temp != NULL) {
		len++;
		temp = temp -> next;
	}
	return len;
}

void insertAtHead(Node* &head, int d) {

  //create a new node
  Node* newNode = new Node(d);
  
  newNode -> next = head;
  head -> prev = newNode;
  head = newNode;

}

int main() {

  Node* node1 = new Node(10);
  Node* head = node1;
  
  print(head);
  cout << "Length of the LL is :- " << getLength(head) << endl;

  insertAtHead(head, 5);
  print(head);
  cout << "Length of the LL is :- " << getLength(head) << endl;

}