#include <iostream>
using namespace std;
int stack[100], n=100, top=-1;
void push(int val) {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}
void pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}
void top_element() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The top element is "<< stack[top] <<endl;
   }
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty, Sorry nothing to display!"<<endl;
}
int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Top element stack"<<endl;
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
            cout<<"the size of the stack is "<<top+1<<endl;
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