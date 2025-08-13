
// class Solution {
//     public:
//         ListNode* partition(ListNode* head, int x) {
//             // if(head==NULL || head->next==NULL) return head;
//             // if(head->val==head->next->val) return head;
//             ListNode* low = new ListNode(0);
//             ListNode* l = low;
//             ListNode* high = new ListNode(0);
//             ListNode* h = high;
//             ListNode* temp = head;
//             while (temp != NULL) {
//                 if (temp->val < x) {
//                     l->next = temp;
//                     temp = temp->next;
//                     l = l->next;
//                 } else {
//                     h->next = temp;
//                     temp = temp->next;
//                     h = h->next;
//                 }
//             }
//            l->next=high->next;
//            h->next=NULL;
//            return low->next;
//         }
//     };