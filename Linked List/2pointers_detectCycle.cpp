bool has_cycle(Node* head) {
    if(head==NULL) return false;
    else{
        Node* slow=head;
        Node* fast=head->next;
        while(slow!=fast){
            if(fast==NULL || fast->next==NULL) return false;
            slow=slow->next;
            fast=fast->next->next;
        }
        return true;
    }
    
}
