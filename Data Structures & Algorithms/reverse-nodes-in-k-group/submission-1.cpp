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
    ListNode* getkthnode(ListNode*tmp ,int k){
        k-=1;
        while(tmp!=NULL && k>0){
            k--;
            tmp=tmp->next;
        }
        return tmp;
    }
    ListNode* reverseLinkedList(ListNode* head){
            ListNode* prev=NULL;
            ListNode* curr=head;
          while(curr){
             ListNode* next=curr->next;
             curr->next=prev;
             prev=curr;
             curr=next;
                 }
                 return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* tmp=head;
        ListNode* prevlasst=NULL;
        while(tmp!=NULL){
            ListNode* kthnode=getkthnode(tmp,k);
            if(kthnode==NULL){
              if(prevlasst){prevlasst->next=tmp;}
              break;
            }
            
            ListNode* nextnode=kthnode->next;
            kthnode->next=NULL;
            reverseLinkedList(tmp);
            if(tmp==head){
                head=kthnode;
            }
            else{
                prevlasst->next=kthnode;
            }
            prevlasst=tmp;
            tmp=nextnode;
        }
        return head;
    }
};
