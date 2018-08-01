Node* reverse(Node *head)
{
  Node* fast=head;
  Node* slow=NULL;
  Node* temp;
  while(fast!=NULL){
      temp=fast->next;
      fast->next=slow;
      slow=fast;
      fast=temp;
  }
  head=slow;
return head;
}
