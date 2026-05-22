/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* tmp=head;
        while(tmp!=NULL){
            Node* copynode=new Node(tmp->val);
            copynode->next=tmp->next;
            tmp->next=copynode;
            tmp=tmp->next->next;
        }
        Node*tmpr =head;
        while(tmpr!=NULL){
        Node* copyNode=tmpr->next;
       if(tmpr->random) {copyNode->random=tmpr->random->next;}

       else{copyNode->random=NULL;}
        tmpr=tmpr->next->next;
        }
      Node* dummy=new Node(-1);
      Node*res=dummy;
      Node* tmpe=head;
      while(tmpe!=NULL){
        res->next=tmpe->next;
        tmpe->next=tmpe->next->next;
        tmpe=tmpe->next;
        res=res->next;
      }
       return dummy->next;
    }
};
