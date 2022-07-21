#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
       ListNode* slow=head;
       ListNode* fast=head;
       ListNode* NodeTODelete=nullptr;
       while(n--){
        fast=fast->next;
       }
       if(fast==nullptr){
        NodeTODelete =head;
        head=NodeTODelete->next;
        delete NodeTODelete;
        return head;
       }


        while(fast->next!=nullptr){
            fast=fast->next;
            slow=slow->next;
        }
        NodeTODelete=slow->next;
        slow->next=NodeTODelete->next;
        delete NodeTODelete;
        return head;
    }
};

int main()
{

    return (0);
}