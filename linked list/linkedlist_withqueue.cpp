#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *front=NULL , *rear=NULL;

void enqueue(int info){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = info;
    newnode->next= NULL;

    if(front == NULL){
        front = rear = newnode;
    }
    else{
        rear->next = newnode;
        rear = newnode;
        rear->next=NULL;
    }
}

void dequeue(){
    if(front == NULL){
        printf("queue is empty.....\n");
    }
    else{
        struct node *temp;
        temp = front;
        front = front->next;
        free(temp);
    }
}

void display(){
    if(front == NULL){
        printf("queue is empty.....\n");
    }
    else{
        struct node *temp;
        temp = front;
        while(temp!=NULL){
            printf("%d\n",temp->data);
            temp = temp->next;
        }
    }
}


int main(){
    int n;
    do{
    printf("enter\n1:enqueue\n2:dequeue\n3:display\n4:exit\n");
    scanf("%d",&n);
    switch(n){
        case 1:
        int p;
        printf("enter enqueue value\n");
        scanf("%d",&p);
        enqueue(p);
        printf("...........");
        display();
        printf("...........");
        break;
        case 2:
        dequeue();
        printf("...........");
        display();
        printf("...........");
        break;
        case 3:
        printf("...........");
        display();
        printf("...........");
        break;
        case 4:
        break;
    }
}while(n!=4);
    return 0;
}