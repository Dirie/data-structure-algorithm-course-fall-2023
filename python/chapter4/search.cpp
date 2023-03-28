#include<iostream>

using namespace std;

int main(){
int a[9]={1,3,4,4,6,17,79,81,90};
int n = 9;
int x = 79;
/* PROGRAM */
int left = 0, right = n-1, mid;
while ( left < right ) {
mid = ( left + right ) / 2;
if ( x > a[mid] ) {
    left = mid+1;
}
else 
{right = mid;
}
}
if ( a[left] == x ) 
cout<<left<<endl;
else cout<<"-1"<<endl;

return 0;
}