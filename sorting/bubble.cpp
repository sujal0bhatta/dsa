#include<stdio.h>

int arr[]={7,4,2,8,5};
void sort(){
    for(int i=5;i>0;i--){
        int x=0;
        while(x!=i-1){
            if(arr[x]>arr[x+1]){
                int t = arr[x];
                arr[x]=arr[x+1];
                arr[x+1]=t;
            }
            x++;
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