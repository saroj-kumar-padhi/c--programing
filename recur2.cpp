#include<iostream>
using namespace std;

int mul(int n1,int n2)
{
    if(n2==0){
        return 1;
    }
    else{
        int prevmul = mul(n1,n2-1);
        return n1*prevmul;
    }
}

int main()
{
    cout<<mul(2,3);
    return 0;
}