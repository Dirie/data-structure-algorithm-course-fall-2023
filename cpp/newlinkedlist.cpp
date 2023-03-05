#include<iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data; // data field
  Node* next; // pointer field
};

Node* createNode(int value) {
  Node* newNode = new Node(); // allocate memory for new node
  newNode->data = value; // assign data value
  newNode->next = nullptr; // initialize next pointer as null
  return newNode; // return pointer to new node
}

void insertNode(Node* head, int value) {
  Node* newNode = createNode(value); // create new node with value
  if (head == nullptr) { // if list is empty
    head = newNode; // make new node as head of list
  }
  else { // if list is not empty
    Node* temp = head; // create temporary pointer to traverse list
    while (temp->next != nullptr) { // loop until last node is reached
      temp = temp->next; // move temp to next node
    }
    temp->next = newNode; // link last node to new node
  }
}

int main()
{
    Node* head = createNode(4);
   

}