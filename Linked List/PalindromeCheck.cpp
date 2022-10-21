class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack <int> st;
        ListNode *trav = head;
        while(trav != NULL)
        {
            st.push(trav->val);
            trav = trav->next;
        }
        while(head != NULL)
        {
            if(head->val != st.top())
                return false;
            st.pop();
            head = head->next;
        }
        return true;
    }
};
