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
        for(j=1;j<=n;j++)
        {
            if(j<=i)
            std::cout<<i;
        }
    }
    return 0;
}