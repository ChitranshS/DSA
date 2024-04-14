// Recursion on subseqences || Printing the 1st subsequences whose sum is k
#include <bits/stdc++.h>
using namespace std;
bool sumk(int i, vector<int> a, int arr[], int n, int k,int sum)
{
    if (i==n)
    {
        if (sum==k)
        {
            for (auto v:a) cout<<v<<" ";
            cout<<endl;
            return true;
        }
        else
        return false;
    }
    
    a.push_back(arr[i]);
    sum+=arr[i];
    if (sumk(i + 1, a, arr, n, k,sum)) return true;
    sum-=arr[i];
    a.pop_back();
    if (sumk(i + 1, a, arr, n, k,sum)) return true;
    
    return false;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 10, 11};
    vector<int> a;
    int k;
    cin >> k;
    cout<<sumk(0, a, arr, sizeof(arr) / sizeof(int), k,0);
    return 0;
}
