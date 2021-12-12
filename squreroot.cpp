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

double morepre(int n,int precision,int tempsol){
    double factor=1;
    double ans=tempsol;
    for(int i=0;i<precision;i++){  
        factor=factor/10;
        for(double j=ans; j*j<n ; j=j+factor){
            ans=j;
        }
    }
    return ans;
}

int main()
{
    cout<<"enter the number "<<endl;
    int n;
    cin>>n;
    int tempsol=root(n);
    cout<<"root is "<<morepre(n,3,tempsol);
    return 0;
}