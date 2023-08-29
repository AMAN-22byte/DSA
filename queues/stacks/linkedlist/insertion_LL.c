#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void traverse(struct node *ptr) {
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
struct node* insertatfirst(struct node*ptr,int val){
    struct node*initial=(struct node*)malloc(sizeof(struct node));
    initial->data=val;
    initial->next=ptr;
    
    return initial;
}
struct node* insertatend(struct node*head,int val){
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    struct node*p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=temp;
    return head;
}
struct node* insertatindex(struct node*head,int val,int ind){
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    struct node*p=head;
    for(int i=0;i<ind-1&&p!=NULL;i++){
        p=p->next;
    }
    temp->next=p->next;//order is important
    p->next=temp;//this will come after the above statemnet 
    
    return head;
    
}

int main() {
    struct node *head = (struct node *)malloc(sizeof(struct node));
    int n;
    int num;

    printf("Enter the head data: ");//kick start head
    scanf("%d", &num);
    head->data = num;
    head->next = NULL;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    struct node *current = head; // Keep track of the current node

    for (int i = 0; i < n; i++) {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        
        printf("Enter the value for node %d: ", i + 1);
        int val;
        scanf("%d", &val);
        
        temp->data = val;
        temp->next = NULL;

        current->next = temp; // Connect the current node to the new node
        current = temp;       // Move the current node to the new node
    }

    printf("Linked List values: ");
    traverse(head); // Print the linked list
    printf("\n");
    printf("after insertion at head\n");
    head=insertatfirst(head,50);
    traverse(head);
    printf("\n");
    insertatend(head,100);
    traverse(head);
    printf("\n");
    insertatindex(head,90,2);
    traverse(head);


    return 0;
}