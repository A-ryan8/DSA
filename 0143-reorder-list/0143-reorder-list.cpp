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
    void reorderList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* n=slow;
        while(fast->next && fast->next->next){
            
            slow=slow->next;
            fast=fast->next->next;

        }
        ListNode* scnd=slow->next;
        slow->next=NULL;
        ListNode* prev=NULL;
        ListNode* nxt=NULL;

        while(scnd){
            nxt=scnd->next;
            scnd->next=prev;
            prev=scnd;
            scnd=nxt;
        }
        ListNode* curr=head;
        
        while(prev){
            ListNode* nxt1 = curr->next;
            ListNode* nxt2 = prev->next;
            curr->next=prev;
            
            prev->next=nxt1;
            curr=nxt1;
            prev=nxt2;

        }
       
        return;
    }
};