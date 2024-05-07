//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
#include<bits/stdc++.h>
using namespace std;
int findBestTime(vector <int> nums)
{
 int mini = nums[0];
 int profit = 0;
 for(int i=1;i<nums.size();i++)
 {
    int nprofit = nums[i] - mini;
    profit = max(nprofit,profit);
    mini = min(mini,nums[i]);
 }
 return profit;
}
int main()
{
    vector <int> nums = {7,1,5,3,6,4};
    cout<<findBestTime(nums);
    return 0;
}