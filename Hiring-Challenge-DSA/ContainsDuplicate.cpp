#include<bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int> nums)
{
    set <int> setCheck(nums.begin(),nums.end());
    if(nums.size() != setCheck.size())
    return true;
    
    return false;

}
int main()
{
    vector <int> nums;
    int size;
    cin>>size;
    for(int i =0;i<size;i++)
    {
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    bool solution = containsDuplicate(nums);
    switch (solution)
    {
    case 0:cout<<"false";
        break;
    
    case 1:cout<<"true";
        break;
    }
    return 0;
}