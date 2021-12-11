#include<iostream>
using namespace std;
int power(int,int);
int main()
{
    int n,p,res;
    cout<<" enter a number and its power";
    cin>>n>>p;
    res=power(n,p+1);
    cout<<res;
}
int power(int n,int p)
{
    int res;
    if(p==1)
    return 1;
    else
    res=n*power(n,p-1);
    return res;
}