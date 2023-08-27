#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node*top=NULL;
void isempty(struct node*top){
    if(top==NULL){
        printf("the stack is empty");
    }

}
void isfull(struct node*top){
    struct node*n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL){
        printf("the stack is full");
    }
}
struct node*push(struct node*top,int x){
    struct node*n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL){
        printf("the stack is full");
    }
    else{
        n->data=x;
        n->next=top;
        top=n;
    }
    return top;
}
int peek(struct node*top,int pos){
    struct node*ptr=top;
    for(int i=0;i<pos-1&&ptr!=NULL;i++){
        ptr=ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }

}
void traversal(struct node*top){
    struct node *ptr = top;
    while(ptr!=NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->next;
    }
}

int main(){

     top=push(top, 10);
    top=push(top, 20);
 top=push(top, 30);
    traversal(top);

  
    return 0;
}