#include<bits/stdc++.h>
using namespace std;
vector<int> productESelf(vector <int> arr)
{
    vector<int> leftSum,rightSum;
    leftSum[0]=1;
    for(int i=1;i<arr.size();i++)
    {
     leftSum[i]= leftSum[i-1] * arr[i-1];   
    }
    for(int i=arr.size()-2;i>-1;--i)
    {
     rightSum[i]= rightSum[i+1] * arr[i+1];   

    }
    vector<int> finalSum;
    for (int i=0;i<arr.size();i++)
    {
        finalSum[i] = leftSum[i]*rightSum[i];
    }
    return finalSum;
}
int main()
{
    vector<int>arr = {2,1,3,4};
    // vector<int> solution = productESelf(arr);
    // cout<<solution[0];
    cout<<'z'-'a';
    return 0;
}