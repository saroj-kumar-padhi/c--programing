#include<iostream>
#include<vector>

using namespace std;
int minimumJumps(std::vector<int> &arr, int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        int max = 0;
        for(int j = i; j< i + arr[i]; j++)
        {
           max = max<arr[j]+j-i?arr[j]+j-i:max;
           cout<<"debug"<<arr[j]+j-i;

        }
        i=max;
        count++;
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        std::vector<int> vec;
        for(int i = 0;i<n;i++){
            int tmp;
            cin>>tmp;
            vec.push_back(tmp);
        }
        std::cout<<minimumJumps(vec,vec.size());
    }
    return 0;
}