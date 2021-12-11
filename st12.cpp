#include<iostream>

int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        std::cout<<"\n";
        for(j=1;j<=4-i;j++)
        {
            std::cout<<" ";
        }
        for(j=1;j>=1;j--)
        {
            std::cout<<"*";
            std::cout<<" ";
        }
        for(j=2;j<=i;j++)
        {
            std::cout<<"*";
            std::cout<<" ";
        }
    }
     for(i=4;i>=1;i--)
    {
        std::cout<<"\n";
        for(j=1;j<=4-i;j++)
        {
            std::cout<<" ";
        }
        for(j=1;j>=1;j--)
        {
            std::cout<<"*";
            std::cout<<" ";
        }
        for(j=2;j<=i;j++)
        {
            std::cout<<"*";
            std::cout<<" ";
        }
    }
}