#include<iostream>
using namespace std;

bool power(int n)
{
    if(n&(n-1)==0)
    return true;
    else
    return false;
}

int main()
{
    int n;
    cout<<"enter no."<<endl;
    cin>>n;
    if(power(n)==0)
    {
        cout<<"true";
    }
    else
        cout<<"false";
    
}