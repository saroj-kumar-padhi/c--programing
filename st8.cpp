#include<iostream>

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        std::cout<<"\n";
        for(j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            std::cout<<1;
            else
            std::cout<<0;

        }
    }
    return 0;
}