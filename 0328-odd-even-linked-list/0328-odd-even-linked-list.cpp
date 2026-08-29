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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* curr=head;
        ListNode evn(0);
        ListNode od(0);
        ListNode* even=&evn;
        ListNode* odd=&od;
        int n=1;
        while(curr){
            ListNode* nextNode = curr->next;
            if(n%2==0){
                even->next=curr;
                even=even->next;
            }else{
            odd->next=curr;
            odd=odd->next;
            }
            curr=nextNode;
            n++;
           

        }
        even->next=NULL;
        odd->next=evn.next;
        return od.next;
        

    }
};