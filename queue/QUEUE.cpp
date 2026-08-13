#include<stdio.h>

int queue[10];
int front = -1, rare = -1;
void insert(int x){// O(1)
    if(rare == 9){
        printf("QUEUE is full");
    }
    else if(front == -1){
        front++;
        rare++;
        queue[rare]=x;
    }
    else{
        rare++;
        queue[rare]=x;
    }
}

void remov(){// O(1)
    if(front == -1){
        printf("QUEUE is empty");
    }
    else{
        front++;
        if(front > rare){
            front = -1;
            rare = -1;
        }
    }
}

void display(){// O(n)
    if(front == -1){
        printf("QUEUE is empty");
    }
    else{
        for(int i=front;i<=rare;i++){
            printf("%d\n",queue[i]);
        }
    }
}

int main(){

    insert(5);
    insert(3);
    insert(7);
    insert(8);
    display();
    printf("..............\n");
    remov();
    display();
    printf("..............\n");
    insert(0);
    insert(1);
    display();


    return 0;
}

// space O(array size)