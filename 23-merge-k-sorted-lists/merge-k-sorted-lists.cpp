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
    struct Compare {
    bool operator()(ListNode* a, ListNode* b) const {
        return a->val > b->val;  // min-heap
    }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, Compare> pq;
        for(int i=0;i<lists.size();i++){
            if (lists[i]!=NULL)
            pq.push(lists[i]);
        }
        ListNode ans;
        ListNode* temp = &ans;
        while(!pq.empty()){
            ListNode* node = pq.top();
            pq.pop();
            temp->next = node;
            temp = temp-> next;
            if(node->next)pq.push(node->next);
        }
        return ans.next;
    }
};