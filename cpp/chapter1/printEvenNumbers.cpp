#include<iostream>
using namespace std;

void printEvenNumber1(int n){
     int i=0;
    while(i <= n){
        if(i%2==0)
        cout<<i<<endl;
        i=i+1;
    }
}

void printEvenNumber2(int n){
     int i=0;
    while(i <= n){
        cout<<i<<endl;
        i=i+2;
    }
}

int main(){
    //this program compares the efficience of two similar algorithms.
    printEvenNumber1(30);
    printEvenNumber2(30);

   
    return 0;
}