class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
        ListNode* nxt=NULL;
        ListNode* pre=NULL;
        while(temp!=NULL){
            nxt=temp->next;
            temp->next=pre;

            pre=temp;
            temp=nxt;
        }
        return pre;
    
    }
};