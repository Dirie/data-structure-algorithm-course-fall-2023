#include<iostream>
using namespace std;
int main()
{
    int n[9]={1, 4, 17, 3, 90, 79, 4, 6, 81};
        cout<<"[";
      for(int i=0;i<=8;i++){
        cout<<n[i]<<" ";
    } 
    cout<<"]";

    for(int i=0;i<=8;i++){
        n[i] = n[i] + 1;
    }


    cout<<"\n\n"; 
     cout<<"[";
    for(int i=0;i<=8;i++){
        cout<<n[i]<<" ";
    }
     cout<<"]";


    
 
}