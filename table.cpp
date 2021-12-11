#include<iostream>
int table(int);
using namespace std;
int main()
{
    int a;
    cout<<"enter a number";
    cin>>a;
    table(a);
    return 0;
}
int table(int a)
{
    int i;
    cout<<"the table is ";
    for(i=1;i<=10;i++)
    {
        int res=0;
        res=a*i;
        cout<<a<<"*"<<i<<"="<<res<<endl;
    }
}