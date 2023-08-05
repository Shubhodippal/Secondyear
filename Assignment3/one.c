//bubble sort
#include<stdio.h>
void swap(int *fb, int *sb){
    (*fb)=(*fb)+(*sb);
    (*sb) = (*fb)-(*sb);
    (*fb) -= (*sb);
}
void bubblesort(int arr[], int*n){
    for(int i=0;i<*n-1;i++){
        for(int j=0;j<*n-i-1;j++){
            if(arr[j]>arr[j+1]){
                //swap
                swap(&arr[j],&arr[j+1]);
            }
        }
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
    bubblesort(arr, &n);
    printf("\nAfter sorting the given array is:\n");
    for(int i=0;i<n;i++){
        printf("%d", arr[i]);
    }
    return 0;
}