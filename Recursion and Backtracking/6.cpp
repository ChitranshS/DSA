#include<bits/stdc++.h>
using namespace std;
int findPivot(int arr[],int low,int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j)
    {
    while(pivot>=arr[i] && i<=high-1)
    {
        i++;
    }
    while(pivot<arr[j] && j>=low+1)
    j--;
    if(i<j)
    swap( arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);

    return j;
}
void quickSort(int arr[],int low, int high)
{
    if (low<high)
    {
     int partition =  findPivot(arr,low,high);
     quickSort(arr,low,partition-1);
     quickSort(arr,partition+1,high);
    }
}

int main()
{
    int arr[] = {3,5,2,4,1};
    quickSort(arr,0,4);
    for(auto i:arr) cout<<i<<" ";
    return 0;
}