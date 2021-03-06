#include<bits/stdc++.h>
using namespace std;
//Binary search implementation
int BinarySearch(int arr[],int k,int n,int key){
    int start=k,end=n-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]==key){
            return mid;
            break;
        }
        else if(arr[mid]<key){
           start=mid+1;
        }
         else if(arr[mid]>key){
             end=mid-1;
            
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
// Pivot implementation
int Pivot(int arr[],int n){
    int start=0,end=n-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}
int main()
{
    int arr[7]={2, 4, 5, 6, 8, 9, 1};
   int pivot=Pivot(arr,7);
//    cout<<pivot<<endl;
cout<<"enter key";int key;
cin>>key;
if(key>=pivot && key<=7){
    cout<<BinarySearch(arr,pivot,7,key);
}
else{
    cout<<BinarySearch(arr,0,pivot+1,key);
}

    
    // cout<<BinarySearch(arr,5,7);
    return 0;
}