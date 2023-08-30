 ListNode* sortList(ListNode* head) {
        struct ListNode*p=head;
        
        while(p!=NULL){
            struct ListNode*q=p->next;
            while(q!=NULL){
            if(p->val>q->val){
                int temp=p->val;
                p->val=q->val;
                q->val=temp;
            }
            q=q->next;
        }
        p=p->next;
        }
        return head;
    }