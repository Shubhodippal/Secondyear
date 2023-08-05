//insertion sort
#include<stdio.h>
void swap(int *fb, int *sb){
    (*fb)=(*fb)+(*sb);
    (*sb) = (*fb)-(*sb);
    (*fb) -= (*sb);
}
void insertionsort(int arr[], int*n){
    for(int i=1;i<*n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && key<=arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=key;
    }
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
    printf("Before sorting the given array is:\n");
    for(int i=0;i<n;i++){
        printf("%d", arr[i]);
    }
    insertionsort(arr, &n);
    printf("\nAfter sorting the given array is:\n");
    for(int i=0;i<n;i++){
        printf("%d", arr[i]);
    }
    return 0;
}