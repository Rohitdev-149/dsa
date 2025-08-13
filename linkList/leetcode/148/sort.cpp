/*

class Solution {
    public:
        ListNode* merge(ListNode* a, ListNode* b) {
            ListNode* c = new ListNode(-1);
            ListNode* t = c;
            while (a != NULL && b != NULL) {
                if (a->val <= b->val) {
                    t->next = a;
                    a = a->next;
                    t = t->next;
                } else {
                    t->next = b;
                    b = b->next;
                    t = t->next;
                }
            }
    
            if (a == NULL)
                t->next = b;
            else
                t->next = a;
            return c->next;
        }
        ListNode* sortList(ListNode* head) {
            if(head==NULL || head->next==NULL){
                return head;
            }
            ListNode* slow = head;
            ListNode* fast = head;
            while (fast->next != NULL && fast->next->next != NULL) {
                slow = slow->next;
                fast = fast->next;
            }
            ListNode* a = head;
            ListNode* b = slow->next;
            slow->next = NULL;
            a = sortList(a);
            b = sortList(b);
            ListNode* c = merge(a, b);
            return c;
        }
    };
*/