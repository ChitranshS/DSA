#include<bits/stdc++.h>
using namespace std;
int findMaxSubarraySum(vector<int>arr)
{
    if(arr.size()==1)
    {
        return arr[0];
    }
    int max = arr[0];
    int sum = 0;
    for(int i :arr)
    {
        sum +=i;
        if(sum<0)
        sum=0;
        if(sum>max)
        max = sum;
    }
    return max;
}
int main()
{
    vector<int> arr = {-1};
    int sum = findMaxSubarraySum(arr);
    cout<<sum;
    return 0;
}