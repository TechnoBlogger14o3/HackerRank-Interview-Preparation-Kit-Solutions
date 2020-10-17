DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    DoublyLinkedListNode *prv=NULL,*curr=head,*nxt;
    while(curr!=NULL){
        nxt=curr->next;
        curr->next=prv;
        curr->prev=nxt;
        prv=curr;
        curr=nxt;
    }
    return prv;
}