#include<iostream>
void perfect(int);
using namespace std;
int main()
{
    int a;
    cout<<"enter  a no"<<endl;
    cin>>a;
    perfect(a);
    return 0;
}
void perfect(int n)
{
    int sum;
    int i,j;
    for(i=1;i<n;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            sum=sum+j;
        }
        if(sum==i)
        cout<<i<<" ";

    }
    
}