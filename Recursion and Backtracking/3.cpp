// Recursion on subseqences || Printing subsequences of an array using recursion
#include<bits/stdc++.h>
using namespace std;
void printSubsequences(int i,vector<int>&b,int arr[],int n)
{
    // we will always reach the end of the array so if i>3 then it mean we reached the end with some sequence
     if (i>=n)
     {
     for (auto v:b) cout<<v;
     if(b.size()==0)
        cout<<"{}";
     
     cout<<endl;
     return;
     }
     // pick and then we increment the index and this element is added to the subsequence
     b.push_back(arr[i]);
     printSubsequences(i+1,b,arr,n);

     //restore the sequence before picking to make the other choice
     b.pop_back();
     // do not pick and then we increment the index and this element is added to the subsequence
     printSubsequences(i+1,b,arr,n);


}
int main()
{   int a[] ={3,1,2};
    vector <int> b;
    printSubsequences(0,b,a,3);
    return 0;
}