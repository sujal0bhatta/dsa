#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push(int item){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->next=NULL;

    if(top==NULL){
        top = newnode;
        top->next=NULL;
    }
    else{
        newnode->next = top;
        top = newnode;
    }
}

void pop(){

    if(top==NULL){
        printf("list is empty\n");
    }else{
        struct node *temp;
        temp = top;
        top = top->next;
        free(temp);
    }
}

void display(){
    if(top==NULL){
        printf("list is empty\n");
    }else{
        struct node *temp;
        temp = top;
        while(temp!=NULL){
            printf("%d\n",temp->data);
            temp = temp->next;
        }
    }
}

int main(){
    int n;
    do{
    printf("enter\n1:push\n2:pop\n3:display\n4:exit\n");
    scanf("%d",&n);
    switch(n){
        case 1:
        int p;
        printf("enter push value\n");
        scanf("%d",&p);
        push(p);
        display();
        printf("...........");
        break;
        case 2:
        pop();
        display();
        printf("...........");
        break;
        case 3:
        display();
        printf("...........");
        break;
        case 4:
        break;
    }
}while(n!=4);
    return 0;
}