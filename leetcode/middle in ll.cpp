 class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count=0;
        struct ListNode *p,*q;
        p=head;
        while(p!=0)
        {   count++;
            p=p->next;
        }
        
        p=head;
         
            int k=count/2 ;
            while(k--)
            {    q=p;
                p=p->next;
            }
            
            head=p;
            return p;
        
        
         
        
    }
}; 
