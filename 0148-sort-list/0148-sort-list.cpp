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

    ListNode *getmid(ListNode *head){
        ListNode *slow = head;
        ListNode *fast = head->next;

        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *mid = slow->next;
        slow->next = nullptr;
        return mid;
    }

    ListNode* merge(ListNode* l1, ListNode* l2){
        ListNode *dummy = new ListNode(0);
        ListNode *ptr= dummy;
        while(l1 != nullptr && l2 != nullptr){
            if(l1->val <= l2->val){
                ptr->next = l1;
                l1 = l1->next;
            }
            else{
                ptr->next = l2;
                l2 = l2->next;
            }
            ptr = ptr->next;
        }
        if(l1 != nullptr){
            ptr->next = l1;
        }
        else{
            ptr->next = l2;
        }

        return dummy->next;
    }
    ListNode* sortList(ListNode* head) {
        
        // Merge sort
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode *mid = getmid(head);
        ListNode *left = sortList(head);
        ListNode *right = sortList(mid); 

        return merge(left,right);
    }
};