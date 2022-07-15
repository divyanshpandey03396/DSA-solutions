class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* slow = head;
        int k=0;
        ListNode* fast = head;
        
        while(k!=n) {
            fast = fast->next;
            k++;
        }
        if(fast == NULL){
            return head->next;
        }
      
        
        while(fast->next!=NULL ) {
            
            slow = slow->next;
            fast = fast->next;           
         
        }
        
      
       
        slow->next = slow->next->next;
        return head;
    }
};