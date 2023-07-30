#include<stdio.h>
#include<stdbool.h>
void search();
void modification();
int main(){
    int size,num;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements:\n");
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to search:");
    scanf("%d", &num);
    search(arr,size,num);
    return 0;
}
void search(int arr[], int size, int num){
    int index;
    bool state=false;;
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            index=i;
            state = true;
        }
    }
    if(state){
        printf("The given element is found at index %d\n",index);
        modification(arr, size, index);
    }else{
        printf("The given element is not found");
    }
}
void modification(int arr[], int size, int index){
    printf("The original array is: ");
    for(int i=0;i<size;i++){
        printf("%d", arr[i]);
    }
    for(int i=index;i<size;i++){
        arr[i]=arr[i+1];
    }
    size--;
    printf("\nAfter deleteing the modified array is: ");
    for(int i=0;i<size;i++){
        printf("%d", arr[i]);
    }
}