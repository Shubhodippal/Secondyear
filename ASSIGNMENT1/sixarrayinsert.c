#include<stdio.h>
void insert();
void insert(int arr[], int size, int n, int index){
    if(index<0 || index>size){
        printf("Invalid location!!!");
    }else{
        for(int i=size-1; i>=index; i--){
            arr[i+1]=arr[i];
        }

        arr[index]=n;
    }
}
int main(){
    int size,n,index;
    printf("Enter the array size:");
    scanf("%d", &size);
    int arr[size+1];
    printf("Enter the array elements:\n");
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element you want to insert:");
    scanf("%d", &n);
    printf("Enter the index you want to insert at:");
    scanf("%d", &index);
    printf("The original array is:\n");
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    insert(arr, size, n, index);
    size++;
    printf("\nAfter inserting the given element the new array is:\n");
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    return 0;
}