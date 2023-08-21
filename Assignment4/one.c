//merge sort
#include<stdio.h>
void conquer(int a[], int beg, int mid, int end){
    int i, j, k;  
    int n1 = mid - beg + 1;    
    int n2 = end - mid;    
      
    int LeftArray[n1], RightArray[n2]; //temporary arrays  
      
    /* copy data to temp arrays */  
    for (int i = 0; i < n1; i++)    
    LeftArray[i] = a[beg + i];    
    for (int j = 0; j < n2; j++)    
    RightArray[j] = a[mid + 1 + j];    
      
    i = 0; /* initial index of first sub-array */  
    j = 0; /* initial index of second sub-array */   
    k = beg;  /* initial index of merged sub-array */  
      
    while (i < n1 && j < n2)    
    {    
        if(LeftArray[i] <= RightArray[j])    
        {    
            a[k] = LeftArray[i];    
            i++;    
        }    
        else    
        {    
            a[k] = RightArray[j];    
            j++;    
        }    
        k++;    
    }    
    while (i<n1)    
    {    
        a[k] = LeftArray[i];    
        i++;    
        k++;    
    }    
      
    while (j<n2)    
    {    
        a[k] = RightArray[j];    
        j++;    
        k++;    
    }    
}
void divide(int arr[], int si, int ei){
   if(si>=ei){
        return;
   }
   int mid = (si+ei)/2;
   divide(arr, si, mid);
   divide(arr, mid+1, ei);
   conquer(arr, si, mid, ei);
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
    divide(arr, 0, n-1);
    printf("\nAfter sorting the given array is:\n");
    for(int i=0;i<n;i++){
        printf("%d", arr[i]);
    }
    return 0;
}