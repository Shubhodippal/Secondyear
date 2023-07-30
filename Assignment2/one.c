// Sum of diagonal elements of the M*N square matrix

#include<stdio.h>
int main(){
    int m,n;
    int result = 0;
    printf("Enter the row size:");
    scanf("%d", &m);
    printf("Enter the column size:");
    scanf("%d", &n);
    int arr[m][n];
    printf("Enter the array elements:");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        int j=i;
        result += arr[i][j];
    }
    printf("The sum of the diagonal elements of the given matrix is:%d",result);
}