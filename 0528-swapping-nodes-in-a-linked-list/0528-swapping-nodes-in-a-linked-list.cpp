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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *temp=head;
        ListNode *first=head;
        ListNode *second=head;
        int n=1,i=1,j=1;
        while(temp->next!=NULL){
            n++;
            temp=temp->next;
        }
        while(i<k){
            first=first->next;
            i++;
        }
        while(j<(n-k+1)){
            second=second->next;
            j++;
        }

        int x=second->val;
        second->val=first->val;
        first->val=x;

        return head;

    }
};