#include<bits/stdc++.h>
using namespace std;
int searchInRotatedArray(vector <int> nums,int target)
{
   int high = nums.size()-1;
   int low = 0;
  
}
int main()
{
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 2;
    // cout<<nums.size();
    int solution = searchInRotatedArray(nums,target);
    cout<<solution;
    return 0;
}