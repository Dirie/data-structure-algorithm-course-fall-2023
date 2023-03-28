#include<iostream>
using namespace std;

int binarySearch(int a[9], int x){
    int n=9;
    int left = 0, right = n-1, mid;

    while ( left < right ) {
        mid = ( left + right ) / 2;
        
        if ( x > a[mid] ) {
            left = mid+1;
        }
        else 
        {
            right = mid;
        }
    }
        if ( a[left] == x ) 
            return left;
        else 
            return -1;

}

int main(){
int a[9]={1,3,4,4,6,17,79,81,90};
int x = 709;

if (binarySearch(a,x) != -1)
    cout<<"The item was found"<<endl;
else
    cout<<"the item was not found"<<endl;

return 0;
}