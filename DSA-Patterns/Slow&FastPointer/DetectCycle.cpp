#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (!head) return NULL;

        ListNode* slow = head;
        ListNode* fast = head;

        // Detect if cycle exists
        bool cycleFound = false;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                cycleFound = true;
                break;
            }
        }

        // If no cycle found, return null
        if (!cycleFound) return NULL;

        // Move fast to head and move both 1 step
        fast = head;
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        return slow; // Start of cycle
    }
};

// Optional: main() just for testing
int main() {
    // Example: Creating a cycle at position 1
    ListNode* head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next; // cycle

    Solution s;
    ListNode* start = s.detectCycle(head);

    if (start)
        cout << "Cycle starts at node with value: " << start->val << endl;
    else
        cout << "No cycle found." << endl;

    return 0;
}
