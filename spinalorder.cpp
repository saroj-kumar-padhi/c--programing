#include<iostream>
using namespace std;


int main()
{
    int a[10][10];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    //initializatin of spinal order

    int row_start=0;
    int row_end=n-1;
    int col_start=0;
    int col_end=m-1;

    // logic for spinal order

    while(row_start<=row_end && col_start<=col_end)
    {
        //1
        for(int i=col_start;i<=col_end;i++)
        cout<<a[row_start][i];

        row_start++;
        //2

        for(int i=row_start;i<=row_end;i++)
        cout<<a[i][col_end];

        col_end--;
        //3

        for(int i=col_end;i>=col_start;i--)
        cout<<a[row_end][i];

        row_end--;

        for(int i=row_end;i>=row_start;i--)
        cout<<a[i][col_start];

        col_start++;
    }

}