// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         ListNode* slow = head;
//         ListNode* fast = head;

//         // Step 1: Detect if a cycle exists
//         while (fast != NULL && fast->next != NULL) {
//             slow = slow->next;          
//             fast = fast->next->next;    
//             if (slow == fast) {
//                 // Step 2: Find the entry point of the cycle
//                 ListNode* temp = head;
//                 while (temp != slow) {
//                     temp = temp->next;
//                     slow = slow->next;
//                 }
//                 return temp; // Start of the cycle
//             }
//         }

//         return NULL; // No cycle
//     }
// };