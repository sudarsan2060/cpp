/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans=new ListNode();
        ListNode* p=ans;
        while(list1!=0&&list2!=0)
        {
            if(list1->val<list2->val)
            {
                 p->next=list1;
                list1=list1->next;
            }
            else if(list1->val>=list2->val)
            {
                 p->next=list2;
                list2=list2->next;
            }
            p=p->next;
        }
        while(list1!=0)
        {
             p->next=list1;
            p=p->next;
            list1=list1->next;
        }
        while(list2!=0)
        {
            p->next=list2;
            p=p->next;
            list2=list2->next;
        }
        
        return ans->next;
        
        
    }
};
