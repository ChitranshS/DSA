#include<bits/stdc++.h>
using namespace std;
bool validParenthesis(string parenthesis)
{
    if(parenthesis.length()%2!=0)
    return false;
   stack <char> stk;
   for (char c:parenthesis)
   {
   if(c == '(' || c == '{' || c=='[')
   stk.push(c);
   else
   {
    if(stk.empty())
    return false;
    char top = stk.top();
    stk.pop();
    if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')) 
    return false;
   
   }
   }
   if(stk.empty())
   return true;
   return false;

}
int main()
{
    string parenthesis;
    cin>>parenthesis;
    bool solution = validParenthesis(parenthesis);
    switch(solution)
    {
        case 0:cout<<"false";
        break;
        case 1:cout<<"true";
        break;
    }
    return 0;
}