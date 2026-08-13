#include<stdio.h>

int top= -1;
int st[10];

void push(int x){
    if(top >=9){
        printf("stack is full \n");
    }
    else{
        top++;
        st[top]=x;
        printf("%d is pushed \n",x);
    }
}

void pop(){

    if(top == -1){
        printf("stack is empty\n");
    }
    else{
    	printf("%d is poped \n",st[top]);
        top--;
    }
}

void topel(){
    if(top == -1){
        printf("stack is empty\n");
    }
    else{
        printf("top element is %d\n",st[top]);
    }
}

void display(){
    if(top == -1){
        printf("stack is empty\n");
    }
    else{
    	printf("\n\nelements\n");
        for(int i=top;i>=0;i--){
            printf("%d\n",st[i]);
        }
    }
}

int main(){
    push(5);
    push(6);
    push(1);
    pop();
    push(2);
    push(8);
    topel();
    push(9);
    pop();
    display();

}