// Recursion on subseqences || Printing subsequences whose sum is k
#include <bits/stdc++.h>
using namespace std;
void sumk(int i, vector<int> a, int arr[], int n, int k, int sum=0)
{
    if (i >= n)
        return;
    // Here we check the sum every recursive addition and if the sum matches we don't create a further tree
    if (a.size() != 0)
    {
        for (auto v : a) sum += v;

        if (sum == k)
        {
            for (auto v : a) cout << v << " ";
            cout << endl;
            return;
        }
    }
    a.push_back(arr[i]);
    sumk(i + 1, a, arr, n, k);
    a.pop_back();
    sumk(i + 1, a, arr, n, k);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 10, 11};
    vector<int> a;
    int k;
    cin >> k;
    sumk(0, a, arr, sizeof(arr) / sizeof(int), k);
    return 0;
}
