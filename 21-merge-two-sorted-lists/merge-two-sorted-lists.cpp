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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head =new ListNode();
        ListNode* ans = head;
        while(list1!=NULL && list2!=NULL){
            int l1 = list1->val;
            int l2 = list2->val;
            ListNode* temp;
            if(l1<l2){
                temp = new ListNode(l1);
                head->next = temp;
                list1= list1->next;
            }
            else{
                temp = new ListNode(l2);
                head->next = temp;
                list2= list2->next;
            }
            head=head->next;
        }
        while(list1!=NULL){
            int l1 = list1->val;
            head->next = new ListNode(l1);
            list1= list1->next;
            head=head->next;
        }
        while(list2!=NULL){
            int l2 = list2->val;
            head->next = new ListNode(l2);
            list2= list2->next;
            head=head->next;
        }

        return ans->next;
    }
};