#include<bits/stdc++.h>
using namespace std;
int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int area = 0;
        while(right-left>=0)
        {
            int newArea = min(height[left],height[right])*(right-left);
            area = max(area,newArea);
            if(height[left] < height[right])
            {
                left++;
            }
            else
            {
                --right;
            }

        }
        return area;
    }
int main()
{
    vector<int> nums = {1,8,6,2,5,4,8,3,7};
    int solution = maxArea(nums);
    cout<<solution;
}