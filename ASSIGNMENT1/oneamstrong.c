#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool amstrong();
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    if(amstrong(num)){
        printf("The given number is an amstrong number");
    }else{
        printf("The number is not an amstrong");
    }
}
bool amstrong(int num){
    int size = (num==0)?0:log10(num)+1;
    int temp = num;
    int nnum=0;
    while(num>0){
        int rem = num%10;
        nnum += pow(rem, size);
        num/=10;
    }
    if (temp==nnum){
        return true;
    }else{
        return false;
    }
}