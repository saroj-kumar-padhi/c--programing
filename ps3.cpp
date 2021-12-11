#include<iostream>

int fac(int);
int main()
{
    int n,r;
    std::cout<<"enter n and r  ";
    std::cin>>n>>r;
    int ans = fac(n)/(fac(n-r)*fac(r));
    std::cout<<ans;
    return 0;
}

int fac(int a)
{
    int mul=1;
    for(int i=a;i>=1;i--)
    {
        mul=mul*i;
    }
    return mul;

}