// Recursion on subseqences || Printing the 1st subsequences whose sum is k
//Here the time complexity is O(n*2^n)
// If we pass sum asa parameter we could get time complexity as O(2^n)
#include <bits/stdc++.h>
using namespace std;
bool sumk(int i, vector<int> a, int arr[], int n, int k)
{
    if (i==n)
    {  
        if (k==0)
        {
            for (auto v:a) cout<<v<<" ";
            cout<<endl;
            return true;
        }
        else
        return false;
    }
    
    a.push_back(arr[i]);
    if (sumk(i, a, arr, n, k-arr[i])) return true;
    a.pop_back();
    if (sumk(i + 1, a, arr, n, k)) return true;
    
    return false;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 10, 11};
    vector<int> a;
    int k;
    cin >> k;
    cout<<sumk(0, a, arr, sizeof(arr) / sizeof(int), k);
    return 0;
}
