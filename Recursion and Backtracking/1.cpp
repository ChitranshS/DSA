// Reverse an array using recursion
#include<bits/stdc++.h>
using namespace std;
void reverse(int i,int arr[],int n)
{
    if (i>=n/2)
    return;

        swap(arr[i],arr[n-i-1]);
        reverse(i+1,arr,n);
    
}
int main()
{
     int a[4];
    for (auto i=0;i<4;i++)
    {
        cin>>a[i];
    }

    reverse(0,a,4);
    for (auto i:a)
    cout<<i;
    
return 0;
}