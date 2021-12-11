#include<iostream>
using namespace std;

int main()
{
    int n,m;
    int temp;
    int a[10][10];
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        if(j<i){
        temp=a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=temp;
           }
            
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


}