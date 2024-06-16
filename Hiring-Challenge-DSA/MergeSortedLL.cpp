#include<bits/stdc++.h>
using namespace std;
struct LinkedNode{
int val;
LinkedNode* next;
LinkedNode(): val(-1),next(nullptr){}
LinkedNode(int val): val(val) , next(nullptr){}
LinkedNode (int val,LinkedNode* next): val(val),next(next){}
};

LinkedNode * merge(LinkedNode * head1, LinkedNode * head2)
{   
    LinkedNode * temp1 = head1;
    LinkedNode * temp2 = head2;
    LinkedNode * dummy = new LinkedNode(-1);
    LinkedNode * temp = dummy;
    while(temp1!=NULL || temp2!=NULL)
    {
        if(temp1->val > temp2->val)
        {
            temp->next = temp2;
            temp = temp2;
            temp2 = temp2->next;
        }
         if(temp1->val < temp2->val)
        {
            temp->next = temp1;
            temp = temp1;
            temp1 = temp1->next;
        }
    }

    if(temp1)
    temp->next = temp1;
    if(temp2)
    temp->next = temp2;
    return dummy;
}
int main()
{
    LinkedNode * node4 = new LinkedNode(5);
    LinkedNode * node3 = new LinkedNode(5,node4);
    LinkedNode * node2 = new LinkedNode(4,node3);
    LinkedNode * node1 = new LinkedNode(2,node2);

    LinkedNode * anode5 = new LinkedNode(5);
    LinkedNode * anode4 = new LinkedNode(4,anode5);
    LinkedNode * anode3 = new LinkedNode(3,anode4);
    LinkedNode * anode2 = new LinkedNode(2,anode3);
    LinkedNode * anode1 = new LinkedNode(1,anode2);

    LinkedNode * solution = merge(node1,anode1);
    cout<<solution->val;

    return 0;
}