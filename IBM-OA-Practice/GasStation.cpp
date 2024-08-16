#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    vector<int> gas = {1,2,3,4,5};
    vector <int> cost = {3,4,5,1,2};
    int total =0;
    int result =0;
    int n = gas.size();
    int totalKamai = accumulate(begin(gas),end(gas),0);
    int totalKharcha = accumulate(begin(cost),end(cost),0);
    if(totalKamai<totalKharcha)
    return -1;
    for(int i=0;i<n;i++)
    {
        total+=gas[i]-cost[i];
        if(total<0)
        {
            result=i+1;
            total=0;
        }
    }
            cout<<result;
            return -1;

}