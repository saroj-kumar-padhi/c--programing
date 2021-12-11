#include<iostream>
using namespace std;

int main()
{
    int i,n;
    cout<<"enter the number of rows";
    cout<<"\n";
    cin>>n;
   for(i=1;i<=n;i++){
     cout<<"\n";
     for(int j=n;j>=1;j--)
     {
        cout<<"*";

     }  
   }
    return 0;
}