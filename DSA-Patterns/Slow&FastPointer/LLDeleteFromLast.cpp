/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummyNode = new ListNode(0);
        dummyNode->next=head;

        ListNode* firstptr=dummyNode;
        ListNode* secondptr=dummyNode;
        
        for (int i=0; i<=n;i++){
            secondptr=secondptr->next;
        }

        while(secondptr!=nullptr){
            firstptr=firstptr->next;
            secondptr=secondptr->next;
        }

        ListNode *deleteNode= firstptr->next;
        firstptr->next=firstptr->next->next;
        delete deleteNode;
//delete can only delete a pointer pointing to the node we want to remove.
//If we directly do:
//firstptr->next = firstptr->next->next;
//we lose the pointer to the node we want to delete → no way to free it.
        return dummyNode->next;


    }
};