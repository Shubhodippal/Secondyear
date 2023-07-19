#include<stdio.h>
int search();
int main(){
    int arr[25],num;
    printf("Enter the array elements one by one:");
    for(int i=0;i<25;i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to search in the array:");
    scanf("%d", &num);
    int count = search(arr, num);
    if(count==0){
        printf("The given element is not present inside the array");
    }else{
        printf("The given number is present in the array %d times",count);
    }
}
int search(int arr[], int num){
    int counter = 0;
    for(int i=0;i<25;i++){
        if(arr[i]==num){
            counter++;
        }
    }
    return counter;
}