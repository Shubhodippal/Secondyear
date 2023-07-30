/*
Write a function to  create an array c that contains only those elements that are common in a and b
*/
#include<stdio.h>
int main(){
    int a[25];
    int b[30];
    int c[25];
    printf("Enter the elements of array a\n");
    for(int i=0;i<25;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the elements of array b\n");
    for(int i=0;i<30;i++){
        scanf("%d", &b[i]);
    }
    for(int i=0;i<30;i++){
        for(int j=0;j<25;j++){
            if(a[j]==b[i]){
                c[j]=a[j];
            }
        }
    }
    printf("The common elements are:");
    for(int i=0;i<25;i++){
        printf("%d ", c[i]);
    }
}