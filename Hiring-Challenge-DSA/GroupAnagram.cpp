#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAnagram(vector<string> list)
{
    if (!list.size())
    return {{""}};

    unordered_map<string,vector<string>> amap;
    vector<vector<string>> solution;
    set <string> keys;
  
    for (string it : list)
    {
        string temp= it;
        sort(temp.begin(),temp.end());
        keys.insert(temp);
        amap[temp].push_back(it); 
    }
    
    for(string it:keys)
    {
        solution.push_back(amap[it]);
    }
    return solution;
}
int main()
{
    vector<string> anagramList = {"ate","tea","tan","ate","nat","bat"};
    vector<vector<string>> sol = groupAnagram(anagramList);
    for (auto it:sol)
    {
        for(auto ik:it)
        cout<<ik<<endl;
        cout<<endl;
    }
    return 0;
}