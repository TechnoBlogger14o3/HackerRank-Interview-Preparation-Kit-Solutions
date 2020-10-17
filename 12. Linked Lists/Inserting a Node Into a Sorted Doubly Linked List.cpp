DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode* temp=head;
    DoublyLinkedListNode* node = (DoublyLinkedListNode*)malloc(sizeof(DoublyLinkedListNode));
    node->next=NULL;
    node->prev=NULL;
    node->data=data;
    if(head==NULL){
        return node;
    }
    if(head->data > data){
        node->next = head;
        head->prev = node;
        head = node;
        return head;
    }
    while(temp){
        if(temp->data >= data){
            node->next=temp;
            temp->prev->next=node;
            node->prev=temp->prev;
            temp->prev=node;
            break;
        }
        if(temp->data < data && temp->next!=NULL){
            temp=temp->next;
        }
        else if(temp->data < data && temp->next==NULL){
            temp->next=node;
            node->prev=temp;
            break;
        }
    }
    return head;
}