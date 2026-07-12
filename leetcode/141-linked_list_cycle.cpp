class Solution {
public:
    ListNode * helper(ListNode * head){
        ListNode * slow = head;
        ListNode * fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                return slow;

            }
        }return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
        ListNode * start = helper(head);
        if(start == NULL){
            return NULL;
        }ListNode* fast = head;
        while(start != fast){
            start = start->next;
            fast = fast->next;
        }return fast;

       
        

        
        
    }
};


        
    


       
 


