#include<iostream>
inline float cir(int);
using namespace std;
int main()
{
    int a;
    cout<<"enter the radius";
    cin>>a;
    float res = cir(a);
    cout<<"the circumference is "<<res<<endl;
}
float cir (int r)
{
    return(3.14*r*r);
}
