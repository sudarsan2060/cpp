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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==0||head->next==0||k==0)
            return head;
        
        ListNode* p=head;
        
        int count=1;
        
        while(p->next!=0)
        {
            count++;
            p=p->next;
        }
     
        p->next=head;  // making list as  loop
        k=k%count;
        
        count-=k;
        
        while(count--)
            p=p->next;     // we will be on prev node  to rotation
        head=p->next;      // make head as rotede node
        p->next=NULL;       // last point to null;
        
        return head;
    
    
    }
};
