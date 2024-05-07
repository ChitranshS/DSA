#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> mergeInterval(vector<vector<int>> nums)
{
    sort(nums.begin(),nums.end());
   vector<int> a = nums[0];
   vector<vector<int>> solution;
    for (int i=1;i<nums.size();i++)
    {
        vector<int> b = nums[i];
        if(b[0] <=a[1])
        {
                a[1] = max(a[1],b[1]);
            
        }
        else{
            solution.push_back(a);
            a = b;
        }
    }
    solution.push_back(a);
    return solution;
}
int main()
{
    vector<vector<int>> nums = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> sol = mergeInterval(nums);
    for(auto it:sol)
    cout<<'['<<it[0]<<','<<it[1]<<']'<<endl;
    return 0;
}