#include<iostream>
using namespace std;

int main()
{
    char arr[20];
    cin.getline(arr,20);
   
    int curlength=0;
    int ans=0;
    

for(int i=0;arr[i]!='\0';i++)
{
    if(arr[i]!=' ')
    {
        curlength++;
         if(curlength>ans)
    {
        ans=curlength;
    }
    }
   
    else
    curlength=0;
}

cout<<ans;
return 0;
}