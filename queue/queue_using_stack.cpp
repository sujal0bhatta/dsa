#include<stdio.h>

int stack[10], top=-1;

void push(int x){
    if(top == 9){
        printf("queue is full.....\n");
    }
    else{
        stack[++top] = x;
    }
}

int pop(){
    if(top == -1){
        printf("queue is empty.....\n");
        return;
    }
    else{
        return stack[top--];
    }
}

int size(){
    return top+1;
}

void insert(int x){
    if (top == -1){
        push(x);
    }
    else{
        int temp = pop();
        insert(x);
        push(temp);
    }
}

void remove(){
    if(top == -1){
        printf("queue is empty.....\n");
    }
    else{
        printf("\n%d is dequeued\n",pop());
    }
}

void display(){
    printf("\n..................\n");
    if(top == -1){
        printf("queue is empty.....\n");
    }
    else{
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}

int main(){

    insert(5);
    insert(3);
    insert(7);
    insert(8);
    remove();
    display();


    return 0;
}