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
    ListNode* reverseList(ListNode* head) {

        if(head ==  NULL){
            return  head;
        }
        ListNode *p = head;
        head =  NULL;
        while(p!=NULL){
            ListNode *s = p->next;
            p -> next = head;
            head = p;
            p = s;
        }
        return head;

    }
};