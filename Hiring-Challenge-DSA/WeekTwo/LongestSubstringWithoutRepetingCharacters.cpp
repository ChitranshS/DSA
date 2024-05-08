#include<bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s)
{
   int start=0,curr=0,maxLength=0;
   unordered_map <char,int>hmap;
   while(curr<s.size())
    {
        if(hmap.find(s[curr]) != hmap.end() && hmap[s[curr]] >= start)
        {
            start = hmap[s[curr]]+1;
        }

        hmap[s[curr]] = curr;
        maxLength = max(maxLength,curr-start+1);
        curr++;
        
        
    }
    return maxLength;

}
int main()
{
    string s = "abba";
    int solution = lengthOfLongestSubstring(s);
    cout<<solution;
    return 0;
}