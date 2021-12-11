#include<iostream>
void grade(float);
using namespace std;
int main()
{
    int a;
    cout<<"enter your marks";
    cin>>a;
    grade(a);
}
void grade(float a)
{
    if(a>90)
    cout<<"A";
    else if(a>80)
     cout<<"b";
      else if(a>70)
     cout<<"c";
      else if(a>60)
     cout<<"d";
      else if(a>50)
     cout<<"e";
      else if(a>40)
     cout<<"f";
     else
     cout<<"fail";
}