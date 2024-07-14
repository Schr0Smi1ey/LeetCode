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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        vector<int> arr;
        ListNode *temp = head;
        sort(nums.begin(),nums.end());
        while(temp != NULL){
            int now = temp->val;
            auto it = lower_bound(nums.begin(),nums.end(),now);
            if(it != nums.end()){
                if(*it != now)
                    arr.push_back(now);
            }
            else{
                arr.push_back(now);
            }
            temp = temp->next;
        }

        ListNode *nhead = NULL,*ntail = NULL;
        for(int i = 0;i < arr.size();i++){
            ListNode *newnode = new ListNode(arr[i]);
            if(nhead == NULL){
                nhead = newnode;
                ntail = nhead;
            }
            else{
                ntail->next = newnode;
                ntail = newnode;
            }
        }
        head = nhead;
        return head;
    }
};