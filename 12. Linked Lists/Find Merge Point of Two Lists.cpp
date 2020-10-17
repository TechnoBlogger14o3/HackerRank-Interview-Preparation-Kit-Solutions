int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* temp=head1;
    int l=0,r=0,diff;
    while(temp){
        temp=temp->next;
        l++;
    }
    temp=head2;
    while(temp){
        temp=temp->next;
        r++;
    }
    if(l>r){
        diff=l-r;
        while(diff--){
            head1=head1->next;
        }
    }
    else if(l<r){
        diff=r-l;
        while(diff--){
            head2=head2->next;
        }
    }
    while(head1!=head2){
        head1=head1->next;
        head2=head2->next;
    }
    return head1->data;
}