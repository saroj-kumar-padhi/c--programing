#include<iostream>

int main()
{
    int k=1;
    int i,j;
    for(i=1;i<=5;i++)
    {
        std::cout<<"\n";
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
            std::cout<<k<<" ";
            k++;
            }
        }
    }
    return 0;
}