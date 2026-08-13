#include<stdio.h>
int max = 10;
int front = -1, rear = -1;
int queue[10];

void insert(int x){

        front++;
        if(front>max-1){
            front = front%max;
        }
        queue[front]=x;
}

void remove(){
    if(front == -1 || front>rear){
        printf("queue is empty \n");
    }
}

int main(){

    return 0;
}