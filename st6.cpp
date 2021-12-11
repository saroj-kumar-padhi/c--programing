#include<iostream>

int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        std::cout<<"\n";
        for(j=1;j<=i;j++)
        {
            std::cout<<"*";
        }
        int space=2*4-2*i;
        for(j=1;j<=space;j++)
        {
            std::cout<<" ";
        }
         for(j=1;j<=i;j++)
        {
            std::cout<<"*";
        }

    }
    for(i=4;i>=1;i--)
    {
        std::cout<<"\n";
        for(j=1;j<=i;j++)
        {
            std::cout<<"*";
        }
        int space=2*4-2*i;
        for(j=1;j<=space;j++)
        {
            std::cout<<" ";
        }
         for(j=1;j<=i;j++)
        {
            std::cout<<"*";
        }

    }
  

    
}