/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *start=NULL,*p=NULL;
    int rem=0;
    while(l1!=NULL || l2!=NULL || rem!=0){
        int v1,v2;
        if(start==NULL && p==NULL){
            start= (struct ListNode *)malloc(sizeof(struct ListNode));
            p = start;
        }
        else{
            p->next = (struct ListNode *)malloc(sizeof(struct ListNode));
            p = p->next;
        }
        if(l1 == NULL)
            v1=0;
        else{
            v1=l1->val;
            l1 = l1->next;
        }
        if(l2 == NULL)
            v2=0;
        else{
            v2=l2->val;
            l2 = l2->next;
        }
        p->val = (v1 + v2 + rem)%10;
        rem = (v1 + v2 + rem)/10;
    }
    p->next=NULL;
    return start;
}
