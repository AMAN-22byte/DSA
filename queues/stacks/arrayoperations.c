#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int size;
    int *arr;
    
};
int push(struct stack*sp,int val){
    if(sp->top==sp->size-1){
        printf("stack is full");
    }
    else{
        sp->top++;
        sp->arr[sp->top]=val;
    }
    return 0;
}
int val;
int pop(struct stack *sp){
    if(sp->top==-1){
        printf("no element can be popped");
    }
    else{
        val= sp->arr[sp->top];
        sp->top--;
        return val;
    }
}

int peek(struct stack*sp,int n){
    if(sp->top-n+1<0){
        printf("not valid position");
    }
    else{
        return sp->arr[sp->top-n+1];
        
    }
}
    
int stacktop(struct stack*sp){
    printf("%d is the stack top",sp->arr[sp->top]);
    
}
int stackbottom(struct stack*sp){
    printf("%d is the bottom element",sp->arr[0]);
}
int main(){
    struct stack*sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=80;
    sp->top=-1;
    sp->arr=(int*)malloc(sp->size*sizeof(int));
    push(sp,8);
    push(sp,10);
    push(sp,12);
    push(sp,14);
    // pop(sp);
    // pop(sp);
    // pop(sp);
    int result = peek(sp, 1);
    if (result != -1) {
        printf("Peeked element: %d\n", result);
    }
    for(int i=1;i<=sp->top+1;i++){
        printf("%d\n",peek(sp,i));
    }
    stacktop(sp);
    printf("\n");
    stackbottom(sp);
}

   
    
    
    
