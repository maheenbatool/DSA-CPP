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
    ListNode* deleteMiddle(ListNode* head) {
        ///if(head->next==NULL)
        int flag=1;
        ListNode* slow=head;
        if (head->next==NULL) return NULL;
        ListNode* fast=head->next;
        if(fast->next==NULL)
        {
            slow->next=NULL;
            return head;
        } 
        ListNode* x=NULL;
        while(fast && fast->next) 
        {
            fast=fast->next->next;
            x=slow;
            slow=slow->next;
        }
        if(fast==NULL)
        {
            //ListNode* temp=slow->next;
            x->next=slow->next;
            //delete temp;
            //temp->next=NULL;
            //delete temp;
            
        }
        else if(fast->next==NULL)
        {
            //ListNode* temp=slow->next;
            slow->next=slow->next->next;
            //delete temp;
            //temp->next=NULL;
           // delete temp;
        }
        return head;

        
    }
};
