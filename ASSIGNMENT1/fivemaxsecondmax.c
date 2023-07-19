#include<stdio.h>
int main(){
    int size;
    printf("Enter the array size:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements:");
    for(int i=0;i<size;i++){
        scanf("%d", &arr[i]);
    }
    int large = arr[0], slarge = arr[1];
    for(int i=1;i<size;i++){
        if(arr[i]>large){
            slarge = large;
            large = arr[i];
        }else if(arr[i]>slarge && arr[i]<large){
            slarge = arr[i];
        }
    }
    printf("The largest element in the array is %d\n",large);
    printf("The second largest element in the array is %d",slarge);
}