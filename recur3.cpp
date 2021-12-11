#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0){
        return 1;
    }
    else{
        int prevmul=fact(n-1);
        return n*prevmul;

    }
}

int main(){
    cout<<fact(5);
    return 0;
}