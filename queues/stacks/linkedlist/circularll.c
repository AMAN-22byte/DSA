#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;

};
struct node*traverse(struct node*head){
    struct node*p=head;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}
int main(){
    struct node*head=(struct node*)malloc(sizeof(struct node));
    int val;
    printf("enter head val:");
    scanf("%d" ,&val);
    head->data=val;
    head->next=NULL;
    int n;
    printf("enter number of nodes:");
    scanf("%d ",&n);
    struct node*p=head;
    for(int i=1;i<n;i++){
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        int value;
        printf("enter the value:");
        scanf("%d",&value);
        temp->data=value;
        temp->next=NULL;
        p->next=temp;
        p=p->next;

    }
    int count=0,d;
    printf("number of iterations u want:");
    scanf("%d",&d);
    
    
    for(int i=0;i<d;i++){
        p->next=head;
    traverse(head);
    count++;
    }
}