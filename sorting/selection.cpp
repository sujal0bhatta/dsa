#include<stdio.h>

int arr[]={7,4,2,8,5};
void sort(){
    for(int i=0;i<5;i++){
        int b=i;
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[b]){
                b=j;
                
            }
            int temp = arr[b];
            arr[b]=arr[i];
            arr[i]=temp;
        }
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