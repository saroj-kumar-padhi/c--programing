#include<iostream>
int recursion(int);
using namespace std;
int main()
{
    int a,i;
    cout<<"enter a number";
    cin>>a;
    for(i=0;i<a;i++)
    {
   cout<< recursion(i)<<" ";
    }
    return 0;
}
int  recursion( int n)
{
   if (n==0)
   return 0;
   else if(n==1)
    return 1;
   else
  return recursion(n-2)+recursion(n-1);
}