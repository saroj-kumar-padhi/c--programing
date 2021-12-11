#include<iostream>
using namespace std;

int inclusive(int n,int a,int b)
{
   int c1,c2,c3;
   c1=n/a;
   c2=n/b;
   c3=n/(a*b);

   return ( (c1+c2)-c3 );
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<inclusive(a,b,c);
}