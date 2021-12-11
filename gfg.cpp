#include<iostream>
using namespace std;

int main()
{
    char arr[20];
    cin.getline(arr,20);
    cout<<arr[0];
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==' ' && arr[i+1]!='\0')
        cout<<arr[i+1];
    }
    return 0;
}