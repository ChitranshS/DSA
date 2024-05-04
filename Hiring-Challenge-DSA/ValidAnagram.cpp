#include<bits/stdc++.h>
using namespace std;
bool validAnagram(string s,string t)
{
    if(s.length()!=t.length())
    return false;
    int hashString[26] = {0};
    int hashS[26] = {0};

    for (char i:s)
    hashString[i-'a']++;
    for (char i:t)
    hashS[i-'a']++;

    for(int i=0;i<26;i++)
    {
        if(hashString[i]!=hashS[i])
        return false;
    }
    return true;


  
    
}
int main()
{
    string anagram = "aacc";
    bool solution = validAnagram(anagram,"ccac");
    switch(solution)
    {
        case 0:cout<<"False";
        break;
        case 1:cout<<"True";
        break;
    }
    return 0;
}