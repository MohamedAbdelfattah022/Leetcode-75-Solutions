#include <bits/stdc++.h>
using namespace std;

class Solution {
    ListNode* ansList;

    void append(int val) {
        ListNode* newNode = new ListNode(val);
        if (ansList == nullptr) {
            ansList = newNode;
        } else {
            ListNode* current = ansList;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void rev(ListNode* head) {
        if (head == nullptr) return;
        rev(head->next);
        append(head->val);
    }

   public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        rev(temp);
        return ansList;
    }
};