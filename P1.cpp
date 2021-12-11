#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int *ptr1;
    int *ptr2;
    ptr2=&b;
    ptr1=&a;
    cout<<"enter the value of a"<<endl;
    cin>>*ptr1;
    cout<<"enter the value of b"<<endl;
    cin>>*ptr2;
    cout<<*ptr2+*ptr1;
}