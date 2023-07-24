#include<stdio.h>
int low(int *arr, int size){
    int *ptr = arr;
    int lowest = *ptr;
    for(int i=0;i<size;i++){
        ptr++;
        if(*ptr<lowest){
            lowest = *ptr;
        }
    }
    return lowest;
}
int main(){
    int size;
    printf("Enter the array size:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements:");
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }
    int lnum = low( arr, size);
    printf("The lowest number in the array is %d",lnum);
}