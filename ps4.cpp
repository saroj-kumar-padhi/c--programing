#include<iostream>

int fac(int);
int main()
{
    for(int i=0;i<6;i++)
    {
    std::cout<<"\n";
    for(int j=0;j<=i;j++)
    {
    int ans = fac(i)/(fac(i-j)*fac(j));
    std::cout<<ans;
    std::cout<<" ";
    }
    }
}

int fac(int a)
{
    int mul=1;
    for(int i=a;i>=2;i--)
    {
        mul=mul*i;
    }
    
    return mul;
}