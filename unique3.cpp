#include<iostream>
using namespace std;

int getbit(int n,int pos)
{
    return( (n&(1<<pos))!=0);

}

int setbit(int n,int pos){
    return( (n|(1<<pos)) );
}


int unique(int arr[],int n)
{
    int result=0;
    int ab;
    for(int i=0;i<32;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if(getbit(arr[j],i)){
                sum++;
                ab=arr[j];
               
            }

        }
        if(sum%3!=0){
        // result=setbit(result,i);
        result=ab;
        }
    }
    return result;

    
}

int main()
{
    int arr[]={1,2,3,4,1,2,3,1,2,3};
    cout<<unique(arr,10)<<endl;
    return 0;
}