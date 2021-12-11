# include<iostream>

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        std::cout<<"\n";
        for(j=1;j<=5-i;j++)
        {
            std::cout<<" ";
        }
        for(j=1;j>=1;j--)
        {
            std::cout<<j;
            std::cout<<" "; 
        }
        for(j=2;j<=i;j++)
        {
            std::cout<<j;
            std::cout<<" ";  
        }
    }
}