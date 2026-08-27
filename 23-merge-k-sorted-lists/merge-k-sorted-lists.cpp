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
        vector<int>v;
        for(auto it:lists){
            while(it){
                v.push_back(it->val);
                it=it->next;
            }
        }
        sort(v.begin(),v.end());
        int n=v.size();

        ListNode* head=nullptr;
        ListNode* temp;
        
        int i=0;
        while(i<n){
            if(!head){
                head=new ListNode(v[i]);
                temp=head;
            }else{
                ListNode* curr=new ListNode(v[i]);
                // cout<<curr->val<<endl;
                temp->next=curr;
                temp=temp->next;

            }
            i++;
        }
        return head;

    }
};