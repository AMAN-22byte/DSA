#include<stdio.h>
#include<stdlib.h>
struct cqueue{
    int size;
    int f;
    int r;
    int *arr;

};
void enqueue(struct cqueue *q,int val){
    if((q->r+1)%(q->size)==q->f){
        printf("overflow");
    }
    else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
            }
         
}
int dequeue(struct cqueue*q){
    int a=-1;
    if(q->f==q->r){
        printf("empty");
    }
    else{
        q->f=(q->f+1)%(q->size);
        a=q->arr[q->f];
    }
    return a;
}
void traversal(struct cqueue*q){
    int i = q->f + 1;
    while (i != (q->r + 1) % (q->size)) {
        printf("%d ", q->arr[i]);
        i = (i + 1) % (q->size);
    }
    printf("\n");
}
int main(){
    struct cqueue*q=(struct cqueue*)malloc(sizeof(struct cqueue));
    q->size=10;
    q->f=q->r=-1;
     q->arr = (int *)malloc(sizeof(int) * q->size); 
    enqueue(q,10);
    enqueue(q,20);
    enqueue(q,30);
    enqueue(q,40);
    enqueue(q,50);
    traversal(q);
    printf("\n");
    dequeue(q);
    traversal(q);
    return 0;

}
