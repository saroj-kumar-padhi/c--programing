#include<bits/stdc++.h>
using namespace std;
int root(int key){
    int start=0,end=key,ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(mid*mid==key)
        {
           return mid;
        }
     
       if(mid*mid<key){
            
            ans=mid;
            start=mid+1;
        }
         else{
          end=mid-1;  
        }

       mid=start+(end-start)/2; 
    }
    return ans;

}

int main()
{
   cout<<root(79);
    return 0;
}