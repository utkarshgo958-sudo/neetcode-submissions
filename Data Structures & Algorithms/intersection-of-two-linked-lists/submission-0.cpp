/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        unordered_set<ListNode*> nodeset;
        ListNode* curr=headA;
              while(curr){
                nodeset.insert(curr);
                curr=curr->next;
              }
        curr=headB;
        while(curr){
            if(nodeset.find(curr)!=nodeset.end()){
                return curr;
            }
            curr=curr->next;
        }
return nullptr;
    }
};