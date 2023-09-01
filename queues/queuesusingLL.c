#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void traverse(struct node*head){
    struct node*temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }

}
int main(){
    struct node*front=0;
    struct node*rear=0;
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    int value;
    printf("enter the value:");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    if(front==0&&rear==0){
        printf("empty");
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
    traverse(front);
}