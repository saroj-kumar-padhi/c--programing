#include<iostream>
void fob(int);

int main()
{
    std::cout<<"enter the number of terms";
    int n;
    std::cin>>n;
    fob(n);
    return 0;
}

void fob(int n)
{
    int current=0;
    int prev=1;
    int prevprev=0;
    for(int i=1;i<=n;i++)
    {
        current=prev+prevprev;
        prevprev=prev;
        prev=current;
        std::cout<<current;
        std::cout<<" ";
    }
}