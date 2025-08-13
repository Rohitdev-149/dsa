
// class Solution {
//     public:
//         ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
//             ListNode* tempA = a;
//             ListNode* tempB = b;
//             ListNode* c = new ListNode(-1);
//             ListNode* tempC = c;
//             while (tempA != NULL && tempB != NULL) {
//                 if (tempA->val <= tempB->val) {
//                     ListNode* t = new ListNode(tempA->val);
    
//                     tempC->next = t;
//                     tempC = t;
//                     tempA = tempA->next;
//                 } else {
//                     ListNode* t = new ListNode(tempB->val);
    
//                     tempC->next = t;
//                     tempC = t;
//                     tempB = tempB->next;
//                 }
//             }
//             if (tempA == NULL) {
//                 tempC->next = tempB;
//             } else
//                 tempC->next = tempA;
    
//             return c->next;
//         }
//     };
// Time and Space Complexity = O(m + n)

// Space Complexity = O(1)
/*
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
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
};
*/