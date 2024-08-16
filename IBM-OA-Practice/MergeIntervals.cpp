#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    sort(begin(intervals),end(intervals));
    vector<int> a=intervals[0];
    vector<vector<int>> solution;
    for(int i=1;i<intervals.size();i++)
    {   
        vector<int> b = intervals[i];
        if (a[1]>=b[0])
        {
            a[1] = max(a[1],b[1]);
        }
        else
        {
            solution.push_back(a);
            a = b;
        }
    }
    solution.push_back(a);

    for(auto it:solution)
    cout<<'['<<it[0]<<','<<it[1]<<']'<<endl;
    return 0;
}