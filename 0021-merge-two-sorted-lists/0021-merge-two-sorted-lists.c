/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addVal(int val){
    struct ListNode* tmp = (struct ListNode*)malloc(sizeof(struct ListNode));
    tmp->val = val;
    tmp->next = NULL;
    return tmp;
}

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* res = (struct ListNode*)malloc(sizeof(struct ListNode));;
    struct ListNode* r = res;

    if(l1 == NULL && l2 == NULL)
        return NULL;
    if(l1 == NULL)
        return l2;
    if(l2 == NULL)
        return l1;
    
    while(l1 != NULL && l2 != NULL){
        if(l1->val <= l2->val){
            r->next = addVal(l1->val);
            r = r->next;
            l1 = l1->next;
        }
        else if(l1->val > l2->val){
            r->next = addVal(l2->val);
            r = r->next;
            l2 = l2->next;
        }
    }
    while(l1 != NULL){
        r->next = addVal(l1->val);
        r = r->next;
        l1 = l1->next;
    }
    while(l2 != NULL){
        r->next = addVal(l2->val);
        r = r->next;
        l2 = l2->next;
    }

    return res->next;
}