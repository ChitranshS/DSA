#include<bits/stdc++.h>
using namespace std;
int searchInRotatedArray(vector <int> nums)
{
   if(nums.size()==1)
   return nums[0];
   int low =0;
   int high = nums.size()-1;
   int mini = nums[0];
   while(low<=high)
   {
    int mid = (low+high)/2;
    if(nums[low]<=nums[mid])
    {
        mini = min({mini,nums[low]});
        low = mid+1;
    }
    else
    {
        mini = min({mini,nums[mid]});
        high = mid-1;
        
    }
   }
   

   return mini;
  
}
int main()
{
    vector<int> nums = {2,3,4,5,1};
    // int target = 1;
    // cout<<nums.size();
    int solution = searchInRotatedArray(nums);
    cout<<solution;
    return 0;
}