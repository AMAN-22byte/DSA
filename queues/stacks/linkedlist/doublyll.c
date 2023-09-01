#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
    struct node*prev;
};
void traverse(struct node*ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
struct node*insertatfirst(struct node*head,int val){
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=head;
    head->prev=temp;
    temp->prev=NULL;
    head=temp;
    return head;
}
struct node*insertatend(struct node*head,int val){
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    struct node*p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=temp;
    temp->prev=p;
    return head;
}
struct node*insertatindex(struct node*head,int val,int ind){
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    struct node*p=head;
    int count=0;
    while(p!=NULL&&count<ind){
        p=p->next;
        count++;
    }
    struct node*q=p->next;
    p->next=temp;
    temp->next=q;
    temp->prev=p;
    q->prev=temp;
    return head;
}
int main(){
    int val;
    struct node*head=(struct node*)malloc(sizeof(struct node));
    printf("enter head val:");
    scanf("%d",&val);
    head->data=val;
    head->next=NULL;
    head->prev=NULL;
    int n;
    struct node*temp=head;
    printf("number of node:");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        int value;
        printf("enter the data:");
        scanf("%d",&value);
        struct node*newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=value;
        newnode->next=NULL;
        temp->next=newnode;
        newnode->prev=temp->next;
        temp=newnode;
        


    }
    traverse(head);
    head=insertatfirst(head,10);
    printf("\n");
    traverse(head);
    printf("\n");
    head=insertatend(head,50);
    traverse(head);
    printf("\n");
    head=insertatindex(head,45,3);
    traverse(head);



}