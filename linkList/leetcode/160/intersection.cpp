/*
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lA = 0, lB = 0;
        ListNode* tempA = headA;
        ListNode* tempB = headB;

        // Step 1: Find lengths of both lists
        while (tempA != NULL) {
            lA++;
            tempA = tempA->next;
        }

        while (tempB != NULL) {
            lB++;
            tempB = tempB->next;
        }

        // Step 2: Reset pointers ` 
        tempA = headA;
        tempB = headB;

        // Step 3: Advance the longer list
        int diff = abs(lA - lB);
        if (lA > lB) {
            for (int i = 0; i < diff; i++) tempA = tempA->next;
        } else {
            for (int i = 0; i < diff; i++) tempB = tempB->next;
        }

        // Step 4: Move both pointers together
        while (tempA != NULL && tempB != NULL) {
            if (tempA == tempB) return tempA;
            tempA = tempA->next;
            tempB = tempB->next;
        }

        return NULL;
    }
};

*/