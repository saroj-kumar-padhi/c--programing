#include<iostream>
using namespace  std;

int main(){
    int a[10][10];
    cout<<"Enter number of rows and Coloumn\n";
    int n,m;
    cin>>n>>m;
    cout<<"emter number of elements\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>a[i][j];
    }