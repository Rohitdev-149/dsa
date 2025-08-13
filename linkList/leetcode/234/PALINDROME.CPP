
// class Solution {
//     public:
//         ListNode* reverse(ListNode* head) {
//             ListNode* prev = NULL;
//             ListNode* curr = head;
//             ListNode* Next = NULL;
//             while (curr) {
//                 Next = curr->next;
//                 curr->next = prev;
//                 prev = curr;
//                 curr = Next;
//             }
    
//             return prev;
//         }
//         bool isPalindrome(ListNode* head) {
//             ListNode* temp = head;
//             ListNode* c = new ListNode(1);
//             ListNode* tempC = c;
//             while (temp) {   //TC = O(N) SC = O(N)
//                 ListNode* node = new ListNode(temp->val);
//                 tempC->next = node;
//                 temp = temp->next;
//                 tempC = tempC->next;
//             }
//             c = c->next;
//             c = reverse(c); //SC = O(N)
//             ListNode* a = head;
//             ListNode* b = c;
//             while (a) {     //SC = O(N)
//                 if (a->val != b->val)
//                     return false;
//                 a = a->next;
//                 b = b->next;
//             }
//             return true;
//         }
//     };