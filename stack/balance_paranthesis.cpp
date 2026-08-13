#include <stdio.h>

char stack[10];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

void pop() {
    top--;
}

int main() {
    char str[] = "()[{}()]";

    for(int i = 0; str[i] != '\0'; i++) {

        if(str[i] == '(' || str[i] == '[' || str[i] == '{') {
            push(str[i]);
        }
        else {
            if(top == -1) {
                printf("Not balanced");
                return 0;
            }

            if((str[i] == ')' && stack[top] == '(') ||
               (str[i] == ']' && stack[top] == '[') ||
               (str[i] == '}' && stack[top] == '{')) {
                pop();
            }
            else {
                printf("Not balanced");
                return 0;
            }
        }
    }

    if(top == -1)
        printf("Balanced");
    else
        printf("Not balanced");

    return 0;
}