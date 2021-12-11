#include<iostream>
using namespace std;

int getbit(int n,int pos)
    {
        return(n&(1<<pos)!=0);
    }

    int setbit(int n,int pos)
    {
        return(n| (1<<pos));
    }

    int clearbit(int n,int pos)
    {
        return(n & ~(1<<pos));
    }
    int updatebit(int n,int pos,int value)
    {
        int mask=~(1<<pos);
        n=mask&n;
    return (n|(value<<pos));
    }

int main()
{
//    cout<<getbit(5,1)<<endl; 
//cout<<setbit(5,1);
// cout<<clearbit(5,1);
cout<<updatebit(5,1,1);
}