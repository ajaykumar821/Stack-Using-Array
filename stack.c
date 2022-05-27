

#include <stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isfull(struct stack *p){
    if(p->top==p->size-1)
    return 1;
    else return 0;
}

int isempty(struct stack *p){
    if(p->top==-1)
    return 1;
    else
    return 0;
}

void push(struct stack *ptr,int data){
    if(isfull(ptr)){
        printf("stack overflow .Can't insert %d\n",data);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=data;
    }
}

int pop(struct stack *ptr){
    int val;
    if(isempty(ptr)){
         printf("stack underflow \n");
    }
    else
    val=ptr->arr[ptr->top];
    ptr->top=ptr->top-1;
    return val;

}



int main()
{
    struct stack *s;
    s=(struct stack *)malloc(sizeof(struct stack));
    s->size=2;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));
    push(s,12);
     push(s,13);
    
    printf(" poped\n",pop(s));
     printf("poped\n",pop(s));
      printf("poped\n",pop(s));
    return 0;
}