// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
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
//         void reorderList(ListNode* head) {
//             ListNode* temp = head;
//             ListNode* slow = head;
//             ListNode* fast = head;
    
//             while (fast->next!= NULL && fast->next->next != NULL) {
//                 slow = slow->next;
//                 fast = fast->next->next;
//             }
//             ListNode* b = reverse(slow->next); //slow is at left middle
//             ListNode* a=head;
//             slow->next = NULL; // break the list
//             //merge the a and b list alternatively
            
//             ListNode* c = new ListNode(0);
//             ListNode* tempC = c;
//             ListNode* tempA = a;
//             ListNode* tempB = b;
//             while (tempA != NULL && tempB != NULL) {
//                 tempC->next = tempA;
//                 tempC = tempC->next;
//                 tempA = tempA->next;
    
//                 tempC->next = tempB;
//                 tempC = tempC->next;
//                 tempB = tempB->next;
//             }
//             tempC->next = tempA;
             
//     head= c->next;
//         }
//     };