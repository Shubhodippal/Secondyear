// linear search
#include<stdio.h>
int linearsearch(int arr[], int *n, int *key){
    for(int i=0;i<*n;i++){
        if(arr[i]==*key){
            return i;
            break;
        }
    }
    return -1;
}
int main(){
    int n;
    printf("Enter the array size:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements:");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter the element you want to search:");
    scanf("%d", &key);
    int index = linearsearch(arr, &n, &key);
    if (index == -1){
        printf("The given element is not present in the array:");
    }else{
        printf("The given element is present in the array at index %d", index);
    }
    return 0;
}