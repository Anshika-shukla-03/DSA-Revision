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
    ListNode* insertionSortList(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode* dummy = new ListNode(-1);
        ListNode* ptr = dummy;
        ListNode *curr = head;

        while(curr != nullptr){
            ListNode* ptr = dummy;
        
            while(ptr->next != nullptr && ptr->next->val <= curr->val){
                ptr = ptr->next;
        
            }
            ListNode* temp = curr->next;
            curr->next = ptr->next;
            ptr->next = curr;
            curr = temp;
            
        }
        return dummy->next;
    }
};