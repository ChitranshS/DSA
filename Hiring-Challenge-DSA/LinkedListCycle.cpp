#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
bool hasCycle(ListNode * head)
{
    if(head== NULL)
    return false;
    ListNode * temp = head;
    map <ListNode*,int> visited;
    while(1)
    {
        if(temp->next == NULL)
        return false;
        visited[temp]++;
         if(visited[temp]>1)
        {
            return true;
        }
        temp = temp->next;

       

    }
    return false;
}

int main()
{
    ListNode * node3 = new ListNode(3);
    ListNode * node2 = new ListNode(2,node3);
    ListNode * node1 = new ListNode(1,node2);
    node3->next = node2;
    bool solution = hasCycle(node1);
    cout<<solution;
    return 0;
}