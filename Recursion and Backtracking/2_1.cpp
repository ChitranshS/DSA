// Leetcode 125
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int i,int n,string b)
{
    if (i>=n/2)
    return true;
    if (b[i]!=b[n-i-1])
    return false;

    return isPalindrome(i+1,n,b);

}
int main()
{
    string a,b;
    cin>>a;
    for (int i=0,k=0;i<a.length();i++)
    {
        if (!isblank(a[i])&& isalnum(a[i]))
        {
            b[k]=tolower(a[i]);
            k++;
        }
    }
    cout<<a;
    bool flag = isPalindrome(0,b.length(),b);
    cout<<flag;
    
return 0;
}