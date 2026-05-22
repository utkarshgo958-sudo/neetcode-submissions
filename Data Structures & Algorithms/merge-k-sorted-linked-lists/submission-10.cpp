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
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()){return nullptr;}
           while(lists.size()>1){
            vector<ListNode*>mergedList;
            for(int i=0;i<lists.size();i+=2){
                ListNode* l1=lists[i];
                ListNode* l2=(((i+1)<lists.size())?lists[i+1]:nullptr);
                 mergedList.push_back(merge2list(l1,l2));
            }
            lists=mergedList;
           }
          return lists[0];
    }
    private:
    ListNode* merge2list(ListNode* node1,ListNode* node2){
        ListNode dummy(0);
        ListNode* tail=&dummy;
        while(node1 && node2){
            if(node1->val<node2->val){
                tail->next=node1;
                node1=node1->next;
            }
            else{
                tail->next=node2;
                node2=node2->next;
            }
            tail=tail->next;
        }
        if(node1){
                 tail->next=node1;
          
        }
        if(node2){
                tail->next=node2;
               
        }
        return dummy.next;
    }
};
