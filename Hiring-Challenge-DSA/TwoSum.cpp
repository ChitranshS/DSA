#include<bits/stdc++.h>
using namespace std;
int sum(vector<int> nums, int left, int right)
{
    return nums[left] + nums[right];
}
pair<int,int> fun(vector<int> nums, int target)
{
        int left = 0;
        int right = nums.size()-1;
        sort(nums.begin() ,nums.end());
        while(left<=right)
        {
            if(sum(nums,left,right) < target)
            {
                ++left;
            }
            else if (sum(nums,left,right) > target)
            {
                --right;
            }
            else if (sum(nums,left,right) == target)
            {
                return make_pair(nums[left],nums[right]);
            }
        }
        cout<<right;
        return make_pair(-1,-1);
        
}
int main()
{
    vector<int> nums;
    int size;
    cin >> size;
    for (int i=0 ; i<size;i++) 
    {
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    int target;
    cin>>target;
    pair<int,int> solution =  fun(nums,target);
    cout<<solution.first << " "<<solution.second;
    return 0;
}