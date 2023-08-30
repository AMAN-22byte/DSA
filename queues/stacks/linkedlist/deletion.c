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
struct node*deleteatfirst(struct node*head){
    head=head->next;
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
    deleteatfirst(head);
    traverse(head);

    


    return 0;
}