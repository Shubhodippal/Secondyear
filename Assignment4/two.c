//quick sort
#include<stdio.h>
void swap(int*i, int*j){
    int temp = *i;
    *i = *j;
    *j = temp;
}
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    /*int i = low-1;
    for (int j=low ;j<=high - 1;j++){
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    i++;
    swap (&arr[i],&arr[high]);
    return i;*/
}
void quicksort(int arr[], int low, int high){
    if(low<high){
        int pivot = partition(arr, low, high);
        quicksort(arr , low,pivot-1 );
        quicksort (arr, pivot+1, high) ;
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
    quicksort(arr, 0, n-1);
    printf("\nAfter sorting the given array is:\n");
    for(int i=0;i<n;i++){
        printf("%d", arr[i]);
    }
    return 0;
}