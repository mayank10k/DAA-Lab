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
    ListNode* partition(ListNode* head, int x) {
        if(!head)return NULL;
        ListNode* head1=NULL,*head2=NULL,*temp1,*temp2;
        
        while(head){
            if(head->val<x){
                if(!head1){
                    head1=new ListNode(head->val);
                    temp1=head1;
                }else{
                    temp1->next=new ListNode(head->val);
                    temp1=temp1->next;
                }
            }else{
                if(!head2){
                    head2=new ListNode(head->val);
                    temp2=head2;
                }else{
                    temp2->next=new ListNode(head->val);
                    temp2=temp2->next;
                }
            }
            head=head->next;
        }
        if(!head1)return head2;
        temp1->next=head2;
        return head1;

        
    }
};