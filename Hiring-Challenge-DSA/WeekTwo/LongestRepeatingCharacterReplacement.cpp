#include<bits/stdc++.h>
using namespace std;
int characterReplacement(string s, int k) {
       unordered_map<char,int> hmap;
    int maxFreq=0;
  
    cout<<maxFreq<<endl;;
    int left = 0,right=0;
    int maxLength = 0;
    while(right<s.size())
    {
         hmap[s[right]]++;
        maxFreq = max(maxFreq,hmap[s[right]]);
    if((right-left+1) - maxFreq > k)
    {
        hmap[s[left]]--;
        left=left+1;
    }
    if((right-left+1) - maxFreq <=k)
    {
        maxLength = max(maxLength,right-left+1);
        right = right+1;
    }
    
        
    }
    return maxLength;
}
int main()
{

    string s = "AABABBA";
    int k = 1;
    int solution = characterReplacement(s,k);
    cout<<solution;
    return 0;
}