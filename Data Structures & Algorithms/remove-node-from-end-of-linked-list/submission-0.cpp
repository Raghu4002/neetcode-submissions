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
        vector<ListNode*> node;
        ListNode* cur=head;
        while(cur!=nullptr){
            node.push_back(cur);
            cur=cur->next;
        }
        int r=node.size()-n;
        if(r==0)return head->next;
        node[r-1]->next=node[r]->next;
        return head;
    }
};
