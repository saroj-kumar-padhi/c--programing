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

    cout<<"enter the elements to be found"<<" ";
    int x;
    cin>>x;
    bool flag=false;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==x)
            {
                cout<<i<<j;
                flag=true;
                break;
            }
        }
    }

    if(flag==true)
    cout<<"element found";
    else
    cout<<"element not found";
    return 0;
}
