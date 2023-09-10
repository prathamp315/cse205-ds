class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* nd=new ListNode();
        nd->next=head;
        ListNode* fast=nd;
        ListNode* slow=nd;
        for(int i=1;i<=n;i++) {
            fast=fast->next;
        }
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        
        return nd->next;

    }
};