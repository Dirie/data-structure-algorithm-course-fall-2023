#include<iostream>
using namespace std;

int main()
{
    int n[9]={1, 350, 17, 3, 90, 0, 4, 6, 81};
    int max = n[0];

    
    for(int j=0;j<=8;j++){
        if(n[j] > max)
        max = n[j];
    }
 
    cout<<max;

}

