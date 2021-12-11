#include<iostream>
using namespace std;
int unique(int arr[],int n)
{
    int sumxor=0;
    for(int i=0;i<n;i++)
    {
       sumxor= sumxor^arr[i];

    }
    return sumxor;
}

int main(){
    int arr[]={2,4,6,3,4,6,2};
    cout<<unique(arr,7);

}