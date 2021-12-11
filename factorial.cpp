#include<iostream>
int fact(int);
using namespace std;
int main()
{
    int a;
    cout<<"enter a no ";
    cin>>a;
    int res=fact(a);
    cout<<"factorial is "<<res;
    return 0;
}
int fact(int a)
{
    int i,res=1;
    for(i=1;i<=5;i++)
    res=res*i;
    return res;
}