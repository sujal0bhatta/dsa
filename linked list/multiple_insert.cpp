#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

//insert at last
void insert(int value){
    struct Node *newnode;
    newnode = (struct Node*)malloc(sizeof(struct Node));

    newnode->data = value;
    newnode->next = NULL;

    if(head == NULL){
        head = newnode;
        return;
    }

    struct Node *temp;
    temp = head;
    while(temp->next!= NULL){
        temp = temp->next;
    }
    
    temp->next=newnode;
}

//display all node
void display(){
    struct Node *ptr = head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
}

//dlt at positon head =1st 
void dlt(int post){
    if(head == NULL){
        printf("List is empty\n");
        return;
    }

    struct Node *temp = head;
    struct Node *q = NULL;

    if(post == 1){
        head = head->next;
        free(temp);
        return;
    }

    for(int i = 1; i < post && temp != NULL; i++){
        q = temp;
        temp = temp->next;
    }

    if(temp == NULL){
        printf("Invalid position\n");
        return;
    }

    q->next = temp->next;
    free(temp);
}
int main(){
    int val;
    for(int i=0;i<5;i++){
        printf("enter data\n");
        scanf("%d",&val);
        insert(val);
    }
    display();
    dlt(3);
    display();
     
    return 0;
}