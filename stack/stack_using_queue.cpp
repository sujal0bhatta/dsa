#include<stdio.h>
int queue[10];
int front =-1,  rear = -1;

void insert(int x){
    if(rear == 9){
        printf("stack is full....\n");
    }
    else if(front == -1){
        front++;
        rear++;
        queue[rear] = x;
    }
    else{
        rear++;
        queue[rear] = x;
    }
}

int remove(){
    if(front == -1 || front > rear){
        printf("stack is empty.....\n");
    }
    else{
        return queue[front++];
    }
}

int size(){
    return rear - front +1;
}

void push(int x){
    insert(x);

    int temp;
    for(int i=0; i<size()-1;i++){
        temp = remove();
        insert(temp);

    }
}

void pop(){
     if(front == -1|| front > rear){
        printf("stack is empty.....\n");
    }
    else{
       printf("poped item = %d", remove());
        
    }
}

void top() {
    if (size() == 0) {
        printf("Stack Empty\n");
        return;
    }

    printf("Top: %d\n", queue[front]);
}

void display(){
    printf("\n...................\n");
     if(front == -1|| front > rear){
        printf("stack is empty.....\n");
    }
    else{
        for(int i=front; i<=rear;i++){
            printf("%d\n",queue[i]);
        }
    }
}



int main(){

    push(5);
    push(4);
    push(6);
    top();
    push(0);
    pop();
    display();

    return 0;
}