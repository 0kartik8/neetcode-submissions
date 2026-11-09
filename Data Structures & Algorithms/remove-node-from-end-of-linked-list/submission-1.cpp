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
        ListNode* first = head;
        int count=0;
        while(first){
            first=first->next;
            count++;
        }
        if(count==1){
            head=head->next;
            return head;
        }
        if(n == count) {
            return head->next;
        }
        int m = count - n+1;
        count = 0;
        ListNode* sec = head;
        while(count<m){
            count++;
            if(count==m-1){
                sec->next = sec->next->next;
                break;
            }
            sec = sec->next;
        }
        return head;
    }
};
