#include<stdio.h>

int arr[]={7,4,2,8,5};
void sort(){
    int key,j;
    for (int i = 1; i < 5; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void display(){
    for(int i=0;i<5;i++){
        printf("\n%d",arr[i]);
    }
}

int main(){
    sort();
    display();
}