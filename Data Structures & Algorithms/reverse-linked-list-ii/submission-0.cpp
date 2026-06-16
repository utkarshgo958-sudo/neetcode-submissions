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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || left==right){return head;}
        ListNode*first=head;ListNode*last=head;
        for(int i=1;i<left-1;i++){first=first->next;}
        for(int i=0;i<right-1;i++){last=last->next;}
        ListNode*fl=last->next;
        ListNode* prev=last->next;
        ListNode* curr=(left==1)?head:first->next;
        while(curr!=fl){
            ListNode* nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        if(left==1){head=prev;}
        else{
            first->next=prev;
        }
return head;
    }
};