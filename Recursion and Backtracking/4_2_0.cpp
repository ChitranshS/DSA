// Recursion on subseqences || Printing the number of subsequences whose sum is k
//Here the time complexity is O(n*2^n)
// If we pass sum as a parameter we could get time complexity as O(2^n)
#include <bits/stdc++.h>
using namespace std;
int sumk(int i, vector<int> a, int arr[], int n, int k)
{
    if (i==n)
    {   int sum=0;
        for (auto it:a) sum+=it;
        if (sum==k)
        {
            for (auto v:a) cout<<v<<" ";
            cout<<endl;
            return 1;
        }
        else
        return 0;
    }
    
    a.push_back(arr[i]);
    int l = sumk(i + 1, a, arr, n, k) ;
    a.pop_back();
    int r= sumk(i + 1, a, arr, n, k);
    
    return l+r;
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
