#include<iostream>

int main()
{
    int n;
    int i,j;
    std::cout<<"enter number of rows  ";
    std::cin>>n;
    for(i=1;i<=n;i++)
    {
        std::cout<<"\n";
        for(j=1;j<=(n+1)-i;j++)
        {
            std::cout<<"*";
        }
    }
    return 0;
}