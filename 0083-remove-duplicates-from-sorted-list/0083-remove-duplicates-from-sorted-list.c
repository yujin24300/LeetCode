/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* p = head;
    struct ListNode* q = head->next;
    int n = head->val;

    while(q != NULL){
        if(n == q->val){
            p->next = q->next;
            free(q);
            q = p->next;
        }
        else{
            p = p->next;
            q = q->next;
            n = p->val;
        }
    }

    return head;
}