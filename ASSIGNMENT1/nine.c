#include<stdio.h>
void swap();
int main(){
    int n1,n2;

    printf("Enter the first number:");
    scanf("%d", &n1);

    printf("Enter the second number:");
    scanf("%d", &n2);

    printf("Before swapping the numbers are \na = %d\nb = %d" ,n1,n2);

    swap(&n1, &n2);

    printf("\nAfter swapping the numbers are \na = %d\nb = %d" ,n1,n2);

    return 0;
}
void swap(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}