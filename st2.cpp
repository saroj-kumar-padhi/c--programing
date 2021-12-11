#include<iostream>

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        std::cout<<"\n";
        for(j=1;j<=4;j++)
        {
            if(i==1||i==5)
           std::cout<<"*";
            else
            {
                
                if(j==1||j==4)
                 std::cout<<"*";
                 else
                 {
                     std::cout<<" ";
                 }
            }
                
            
        }
    }
}