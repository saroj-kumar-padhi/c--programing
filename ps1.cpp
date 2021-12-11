#include<iostream>
#include<math.h>

bool prime(int);
int main()
{
    int a,b;
    std::cout<<"enter start point and end point";
    std::cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
    if(prime(i))
    {
    std::cout<<i;
    std::cout<<" ";
    }
    }
}

bool prime (int a)
{
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        return false;
    }
    return true;
}