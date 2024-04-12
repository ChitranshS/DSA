// Check if the given string is palindrome or not using recursion
#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(int i ,int n ,string a)
{
    if (i>=n/2)
    return true;
    if(a[i]!=a[n-i-1])
    return false;
    return checkPalindrome(i+1,n,a);
}
int main()
{
    string a;
    cin>>a;
    string b = a;
    bool flag = checkPalindrome(0,a.length(),a);
    cout<<flag;
    return 0;
}