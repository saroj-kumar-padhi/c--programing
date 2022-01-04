#include<bits/stdc++.h>
using namespace std;
bool isvalid(char ch){
    if(ch>='A'&& ch<='Z' ||
    ch>='a'&&ch<='z'||
    ch>='1' && ch<='9'){
        return true;
    }
    else{
        return false;
    }
    
}
char iscapital(char ch){
    if(ch>='A' && ch<='Z'){
        return (ch-'A'+'a');
    }
    if(ch>='a' && ch<='z'){
        return ch;
    }
    
}


int main()
{
    char arr[20]={'#','N','o','o','n','*'};

    int s=0;
    int e=5;
    while(s<e){
      if(isvalid(arr[s])==false ){
          s++;

      }
      if(isvalid(arr[e])==false ){
          e--;
        }
     arr[s]=iscapital(arr[s]);
     if(arr[s]!=arr[e]){
         cout<<"Not Plaindrome";
         break;
        }
        s++;
        e--;
        


    }
    cout<<"Palindrome";
    return 0;
}