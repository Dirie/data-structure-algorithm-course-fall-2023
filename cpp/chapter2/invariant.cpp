#include<iostream>
using namespace std;

int findMax(int a[9]){
    int max = a[0];

    for(int j=0;j<=8;j++){
        if(a[j] > max)
        max = a[j];
    }
    return max;
}

int findMin(int a[9]){
    int min = a[0];

    for(int j=0;j<=8;j++){
        if(a[j] < min)
        min = a[j];
    }
    return min;
}

int main()
{
    int n[9]={1, 350, 17, 3, 90, 2, 4, 6, 81};

    cout<<findMax(n)<<endl;
    cout<<findMin(n)<<endl;
    
    
}

