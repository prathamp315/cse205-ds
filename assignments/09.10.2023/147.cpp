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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* a=new ListNode(0);
        a->next=head;
        ListNode* curr=head;
        while(curr &&curr->next){
            if(curr->val<=curr->next->val){
                curr=curr->next;
            }
            else{
                ListNode* temp=a;
                while(temp->next->val<curr->next->val){
                    temp=temp->next;

                }
                ListNode* tempnext=temp->next;
                temp->next=curr->next;
                curr->next=curr->next->next;
            temp->next->next=tempnext;


            }
        }
        return a->next;

    }
};