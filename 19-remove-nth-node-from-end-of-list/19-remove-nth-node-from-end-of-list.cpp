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
        int length=0;
        ListNode* num=head;
        while(num!=NULL)
        {
            num=num->next;
            length++;
        }
        if(length==n)
            return head->next;
        num=head;
        length=length-n-1;
        for(int i=0;i<length;i++)
            num=num->next;
        num->next=num->next->next;
        return head;
        
    }
};