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
ListNode* removeNthFromEnd(ListNode* head, int n) {
       if(head)
       {
       ListNode * temp = head;
        int totalNodes=1;
        while(temp->next!=NULL)
        {
            temp = temp->next;
            totalNodes+=1;
        }
        if(totalNodes==1)
        {
            return nullptr;
        }
        int beforeFlagNode = totalNodes-n-1;
        if(beforeFlagNode<0)
        {
            ListNode * deletedNode = head;
                head = deletedNode->next;
                deletedNode->next = NULL;
        }

        temp = head;
        int currentNode = 0;
        while(temp!= nullptr)
        {
        cout<<currentNode<<" ";
            if(currentNode == beforeFlagNode)
            {
                ListNode * deletedNode = NULL;
                deletedNode = temp->next;
                temp->next = temp->next->next;
                deletedNode->next = NULL;
            }
            temp = temp->next;
            currentNode++;
            

        }
        return head;
    }
    return nullptr;


    }
int main()
{
    ListNode * node5 = new ListNode(2);
    // ListNode * node4 = new ListNode(4,node5);
    // ListNode * node3 = new ListNode(3,node4);
    // ListNode * node2 = new ListNode(2,node3);
    ListNode * node1 = new ListNode(1,node5);
    ListNode * solution = removeNthFromEnd(node1,2);
    cout<<endl;
     while (solution != NULL) {
        cout << solution->val << " ";
        solution = solution->next;
    }
    cout << endl;
    return 0;
}