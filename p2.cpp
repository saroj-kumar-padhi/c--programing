#include<iostream>
using namespace std;

int main()
{
    int a=2;
    int b=3;
    int c;
    int *ptr1=&a;
    int *ptr2=&b;
    

    c=*ptr1;
    *ptr1=*ptr2;
    *ptr2=c;

    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}