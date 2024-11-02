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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c=0;
        ListNode* temp=head;
        while(temp!=nullptr){
            c++;
            temp=temp->next;
        }
        if(c==1)
            return nullptr;
        temp=head;
        if(c==n) return head->next;
        for(int i=1;i<c-n;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};