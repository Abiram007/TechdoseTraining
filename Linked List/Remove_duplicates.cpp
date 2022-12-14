ListNode* removeDuplicates(struct Node* start)
{
    unordered_set<int> seen;
    struct Node* curr = start;
    struct Node* prev = NULL;
    while (curr != NULL) {
        if (seen.find(curr->data) != seen.end()) {
            prev->next = curr->next;
            delete (curr);
        }
        else {
            seen.insert(curr->data);
            prev = curr;
        }
        curr = prev->next;
    }
  return start;
}
