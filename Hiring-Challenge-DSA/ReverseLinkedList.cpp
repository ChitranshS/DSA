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

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *temp = head;
        ListNode *prev = nullptr;
        ListNode *front = nullptr;

        while (temp != nullptr) {
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
};

int main() {
    // Test the reverseList function
    ListNode *node3 = new ListNode(3);
    ListNode *node2 = new ListNode(2, node3);
    ListNode *head = new ListNode(1, node2);

    Solution solution;
    ListNode *reversed = solution.reverseList(head);

    // Print the reversed list
    while (reversed != nullptr) {
        cout << reversed->val << " ";
        reversed = reversed->next;
    }
    cout << endl;

    return 0;
}
