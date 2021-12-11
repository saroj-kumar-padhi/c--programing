#include<iostream>
inline int product(int,int);
using namespace std;
int main()
{
    int a,b,res;
    cout<<"enter two integers";
    cin>>a>>b;
    res=product(a,b);
    cout<<"the product of two no is"<<res<<endl;
    return 0;
}

int product(int a, int b)

{
    return (a*b);

}