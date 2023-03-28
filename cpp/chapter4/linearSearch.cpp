#include<iostream>
using namespace std;

int linearSearch(int a[9], int x){
    int n=9;

    for (int i = 0 ; i < n ; i++ ) {
    if ( a[i] == x ) return i;
    }
    return -1;
}
int main(){
int a[9]={1,3,4,4,6,17,79,81,90};
int x=79;


if (linearSearch(a,x) != -1)
    cout<<"The item was found"<<endl;
else
    cout<<"the item was not found"<<endl;

return 0;
}