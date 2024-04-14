#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int low,int mid,int high)
{   vector <int> v;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high)
    {
        if(arr[left]>arr[right])
        {
            v.push_back(arr[right]);
            right++;
        }
        else
        {
            v.push_back(arr[left]);
            left++;
        }
    }
    while(left<=mid)
    {
        v.push_back(arr[left]);
        left++;
    }
    while(right<=high)
    {
        v.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++)
    {
        arr[i] = v[i-low];
    }
}
void mergeSort(int arr[], int low,int high)
{
    if(low>=high)
    {
        return;
    }

    int mid = (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main()
{
    int arr[] = {3,1,2,4,3};
    mergeSort(arr,0,5);
    for(auto i:arr) cout<<i<<" ";
    return 0;
}