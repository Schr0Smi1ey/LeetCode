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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int cnt = 0;
        ListNode *first = NULL,*second = NULL,*third = NULL;
        ListNode *temp = list1;
        while(temp){
            cnt++;
            if(cnt == a){
                first = temp;
            }
            if(cnt == b + 2){
                second = temp;
                break;
            }
            temp = temp->next;
        }
        temp = list2;
        while(temp->next){
            temp = temp->next;
        }
        third = temp;
        first->next = list2;
        third->next = second;
        return list1;
    }
};