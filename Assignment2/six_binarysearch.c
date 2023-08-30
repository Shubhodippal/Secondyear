// binary search
#include<stdio.h>
int binarysearch(int arr[], int *n, int *key){
    int left = 0;
    int right = (*n)-1;
    while (left<=right)
    {
        int mid = (left+right)/2;
        if(arr[mid]==*key){
            return mid;
            break;
        }
        else if(*key < arr[mid]){
            right = mid-1;
        }else{
            left = mid + 1;
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
    int index = binarysearch(arr, &n, &key);
    if (index == -1){
        printf("The given element is not present in the array");
    }else{
        printf("The given element is present in the array at index %d", index);
    }
    return 0;
}