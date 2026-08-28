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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)return nullptr;
        ListNode* prev=head;
        ListNode* after=prev->next;
        while(prev && after){
            if(prev->val==after->val){
                after=after->next;
            }else{
                prev->next=after;
                prev=after;
                after=after->next;
            }
        }
        prev->next=nullptr;
        return head;
    }
};