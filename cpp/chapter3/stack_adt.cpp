#include <iostream>
using namespace std;

struct Node {
   int data;
   struct Node *next;
};
struct Node* top = NULL;
void push(int val) {
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
   newnode->data = val;
   newnode->next = top;
   top = newnode;
}
void pop() {
   if(top==NULL)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< top->data <<endl;
      top = top->next;
   }
}
void top_element() {
   if(top==NULL)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The top element is "<< top->data <<endl;
   }
}
int getCount(Node* t)
{
    int count = 0; // Initialize count
    Node* current = t; // Initialize current
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}
void display() {
   struct Node* ptr;
   if(top==NULL)
   cout<<"stack is empty, sorry nothing to display"<<endl;
   else {
      ptr = top;
      cout<<"Stack elements are: ";
      while (ptr != NULL) {
         cout<< ptr->data <<" ";
         ptr = ptr->next;
      }
   }
   cout<<endl;
}
int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Top element of the stack"<<endl;
   cout<<"5) Size of the stack"<<endl;
   cout<<"6) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            display();
            break;
         }
         case 2: {
            pop();
            display();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            top_element();
            display();
            break;
         }
         case 5: {
            cout<<"The size of the stack is "<<getCount(top)<<endl;
            display();
            break;
         }
         case 6: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=6);
   return 0;
}