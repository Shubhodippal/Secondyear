#include<stdio.h>
int main(){
    int lim;
    printf("Enter the limit\nHow many number you want to print in the sequence:");
    scanf("%d", &lim);
    int fd = 0;
    int sd = 1;
    printf("%d  %d ",fd,sd);
    for(int i=1;i<lim-1;i++){
        int num = fd + sd;
        printf(" %d", num);
        fd = sd;
        sd = num;
    }
}