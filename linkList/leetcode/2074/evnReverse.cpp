/*


class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* Next = NULL;
        while (curr) {
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }

        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int l, int r) {
        if (l == r)
            return head;
        ListNode* temp = head;
        int n = 1;
        ListNode* a = NULL;
        ListNode* b = NULL;
        ListNode* c = NULL;
        ListNode* d = NULL;
        while (temp) {
            if (n == l - 1)
                a = temp;
            if (n == l)
                b = temp;
            if (n == r)
                c = temp;
            if (n == r + 1)
                d = temp;
            temp = temp->next;
            n++;
        }
        if (a != NULL)
            a->next = NULL;
        c->next = NULL;
        c = reverse(b);
        if (a != NULL)
            a->next = c;
        b->next = d;
        if (a != NULL)
            return head;
        return c;
    }
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode* temp = head;
        int gap = 1;
        while (temp != NULL && temp->next != NULL) {
            //to manage the last group
            int remL = 0;
            ListNode* t = temp->next;
            for (int i = 1; i <= gap+1 && t!=NULL; i++) {
                t = t->next;
                remL++;
            }
            
            if (remL < gap+1)
                gap = remL-1;
                //......
            if (gap % 2 != 0)
                reverseBetween(temp, 2, gap + 2);
            gap++;
            for (int i = 1; temp != NULL && i <= gap; i++) {
                temp = temp->next;
            }
        }
        return head;
    }
};

*/