//selection sort
#include<stdio.h>
void swap(int *fb, int *sb){
    (*fb)=(*fb)+(*sb);
    (*sb) = (*fb)-(*sb);
    (*fb) -= (*sb);
}
void selectionsort(int arr[], int*n){
    for(int i=0;i<*n-1;i++){
        for(int j=i+1;j<*n;j++){
            if(arr[i]>arr[j]){
                //swap
                swap(&arr[i],&arr[j]);
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
    selectionsort(arr, &n);
    printf("\nAfter sorting the given array is:\n");
    for(int i=0;i<n;i++){
        printf("%d", arr[i]);
    }
    return 0;
}