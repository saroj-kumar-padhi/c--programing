#include<iostream>
using namespace std;

int main()
{
    int i,j,k;
    int a1[10][10];
    int a2[10][10];
    int ans[10][10];

     
     

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a1[i][j];
        }
    }

     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a2[i][j];
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            ans[i][j]=0;
            for(k=0;k<3;k++)
            {
                ans[i][j]+=a1[i][k]*a2[k][j];

            }
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}    