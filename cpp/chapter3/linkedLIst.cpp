// #include <bits/stdc++.h>
#include<iostream>
using namespace std;

class node {
public:
	int data;
	node* next;
	// A constructor is called here
	node(int value)
	{
		// It automatically assigns the
		// value to the data
		data = value;
		// Next pointer is pointed to NULL
		next = NULL;
	}
};

// Function to insert an element
// at head position
void insertFirst(node*& head, int val)
{
	node* n = new node(val);
	n->next = head;
	head = n;
}

// Function to insert a element
// at a specified position
void insertafter(node* head, int key, int val)
{
	node* n = new node(val);
	if (key == head->data) {
		n->next = head->next;
		head->next = n;
		return;
	}

	node* temp = head;
	while (temp->data != key) {
		temp = temp->next;
		if (temp == NULL) {
			return;
		}
	}
	n->next = temp->next;
	temp->next = n;
}

// Function to insert an
// element at the end
void insertLast(node*& head, int val)
{
	node* n = new node(val);
	if (head == NULL) {
		head = n;
		return;
	}

	node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = n;
}

// Function to print the
// singly linked list
void print(node*& head)
{
	node* temp = head;

	while (temp != NULL) {
		cout << temp->data << " -> ";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

bool search(node* head, int x)
{
    node* current = head; // Initialize current
    while (current != NULL) {
        if (current->data == x)
            return true;
        current = current->next;
    }
    return false;
}

int getCount(node* head)
{
    int count = 0; // Initialize count
    node* current = head; // Initialize current
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}



    void deleteNode(node* head,int value) {
        node* pre;
        node* current;
        current = head; // head is the pointer to the first node
        while(current->data != value) {
            pre = current;
            current = current->next;
        }
        pre->next = current->next; // skip the node to be deleted
}


// Main function
int main()
{

	// Declaring an empty linked list
	node* head = NULL;

	
	insertFirst(head, 2);
	cout << "After insertion at first position: ";
	print(head);
	cout << endl;



	insertLast(head, 4);
	insertLast(head, 5);
	cout << "After insertion at last position: ";
	print(head);
	cout << endl;

	
	

	insertafter(head, 1, 2);
	insertafter(head, 2, 6);
	cout << "After insertion at next of a given element: ";
	print(head);
	cout << endl;


    search(head, 91) ? cout << " is in the list." : cout << "No"<<endl;

    cout << "the length of the node is: " << getCount(head)<<endl;
    print(head);
    int m=1;
    if(search(head, m)){
        deleteNode(head,m);
        cout<<"Value "<<m<<" was deleted!"<<endl;
        print(head);
    }
	

	


	



   



	return 0;
}

