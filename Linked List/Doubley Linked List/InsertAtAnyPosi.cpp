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

void insertAtHead(Node* &head, Node* &tail, int d) {

  //in case of empty
  if(head == NULL) {
    Node* temp = new Node(d);
    head = temp;
  }
  else{
    //create a new node
    Node* newNode = new Node(d);
    
    newNode -> next = head;
    head -> prev = newNode;
    head = newNode;
  }
  

}

void insertAtTail(Node* &head, Node* &tail, int d) {

  //in case of empty
  if(tail == NULL) {
    Node* temp = new Node(d);
    head = temp;
    tail = temp;
  }
  else{
    //create a new node
    Node* newNode = new Node(d);

    newNode -> prev = tail;
    tail -> next = newNode;
    tail = newNode;
  }
}

void insertAtPosition(Node* &head, Node* &tail, int posi, int d) {

  if(posi == 1) {
    insertAtHead(head, tail, d);
    return;
  }

  int cnt = 1;
  Node* temp = head;

  while(cnt < posi-1) {
    temp = temp -> next;
    cnt++;
  }

  if(temp -> next == NULL) {
    insertAtTail(head, tail, d);
    return;
  }

  //create a new node
  Node* newNode = new Node(d);

  newNode -> next = temp -> next;
  temp -> next -> prev = newNode;
  temp -> next = newNode;
  newNode -> prev = temp;

}


int main() {

  Node* node1 = new Node(10);
  Node* head = node1;
  Node* tail = node1;
  
  print(head);
  cout << "Length of the LL is :- " << getLength(head) << endl;

  insertAtHead(head, tail, 5);
  print(head);
  cout << "Length of the LL is :- " << getLength(head) << endl;

  insertAtTail(head, tail, 15);
  print(head);
  cout << "Length of the LL is :- " << getLength(head) << endl;

  insertAtPosition(head, tail, 4, 13);
  print(head);
  cout << "Length of the LL is :- " << getLength(head) << endl;

}
