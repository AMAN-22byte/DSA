#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int*arr;

};
int enqueue(struct queue *q,int val){
    q->r=q->r+1;

    q->arr[q->r]=val;
    return val;
    
}
int dequeue(struct queue *q){
    int a=-1;
    q->f++;
    a=q->arr[q->f];
    return a;
}
void traversal(struct queue *q){
    for(int i=q->f+1;i<=q->r;i++){
        printf("%d ",q->arr[i]);
    }
    
    
}
int firstval(struct queue*q){
    printf("%d ",q->arr[q->f]);
}
int lastval(struct queue*q){
    printf("%d ",q->arr[q->r]);
}

int main(){
    struct queue q;
    q.size=10;
    q.f=q.r=-1;
    q.arr=(int*)malloc(sizeof(int)*q.size);
    int num,val;
    printf("enter the number of elements to enqueue:");
    scanf("%d" ,&num);
    for(int i=0;i<num;i++){
        scanf("%d",&val);
        enqueue(&q,val);
    }


    // enqueue(&q,10);
    // enqueue(&q,20);
    // enqueue(&q,30);
    // enqueue(&q,40);
    traversal(&q);
    printf("\n");
    dequeue(&q);
    traversal(&q);
    printf("\n");
    firstval(&q);
    printf("\n");
    lastval(&q);


}