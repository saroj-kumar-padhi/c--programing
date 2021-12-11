#include<iostream>
using namespace std;
int recur(int n)
{
    if(n==0){
        return 0;
    }
    else{
    int prevsum=recur(n-1);
    return (n+prevsum);
    }
}
int main()
{
    cout<<recur(5);
    return 0;

} 