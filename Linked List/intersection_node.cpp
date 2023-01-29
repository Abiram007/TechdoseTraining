class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        if(!headA || !headB)
        {
            return NULL;
        }
        ListNode *h1=headA;
        ListNode *h2=headB;
        while(h1!=h2)
        {
            h1=h1==NULL? headB : h1->next;
            h2=h2==NULL? headA : h2->next;
        }
        return h1;
    }
};
