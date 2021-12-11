#include<iostream>
using namespace std;
  int count(int n)
    {
        int count=0;
        for(int i=0;n>0;i++)
        {
            n=(n&n-1);
            count++;

        }
        return count++;
    }

int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<"the number of 1 in this number is"<<" "<<count(n);
    return 0;
  
}