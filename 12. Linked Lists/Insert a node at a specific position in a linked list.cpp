SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* temp=head;
    SinglyLinkedListNode* newNode = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    newNode->data=data;
    newNode->next=NULL;
    if(position==0){
        newNode->next=head;
        head=newNode;
        return head;
    }
    position=position-1;
    while(position--){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    return head;
}