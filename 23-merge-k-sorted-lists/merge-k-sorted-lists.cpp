class Solution {
public:

    struct Compare {
        bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val;
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {

        priority_queue<ListNode*, vector<ListNode*>, Compare> pq;

        // Put first node of every list into min-heap
        for (ListNode* node : lists) {
            if (node != nullptr) {
                pq.push(node);
            }
        }

        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (!pq.empty()) {

            // Smallest node
            ListNode* smallest = pq.top();
            pq.pop();

            // Add it to answer
            tail->next = smallest;
            tail = smallest;

            // Add next node from the same list
            if (smallest->next != nullptr) {
                pq.push(smallest->next);
            }
        }

        return dummy.next;
    }
};