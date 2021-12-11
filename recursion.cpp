#include<iostream>
void  recursion(int);
using namespace std;
int main()
{
    int a;
    cout<<"enter the number upto which u want to print"<<endl;
    cin>>a;
    recursion(a);

}
void recursion(int n)
{
    int i,prevprev,current=1, prev=0;
    cout<< prev <<"\t" << current<<"\t";
    for(i=2;i<n;i++)
    {
        prevprev=prev;
        prev=current;
        current=prev+prevprev;
        cout<<  current <<"\t";
    }
}
