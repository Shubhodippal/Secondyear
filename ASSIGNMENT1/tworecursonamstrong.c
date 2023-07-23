#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int amstrong();
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    int size = (num==0)?0:log10(num)+1;
    /*if(num==0){
        size=0;
    }else{
        size=log10(num)+1;
    }*/
    int nnum = amstrong(num, size);
    if(nnum==num){
        printf("The given number is amstrong");
    }else{
        printf("The given number is not an amstrong");
    }
}
int amstrong(int num, int size){//1634 temp=4 num =163 return 4power4+ temp 3 num =16 r pow 4 + 3 power 4+ 6 pow 4+ a pow 4 num=0
    if(num>0){
        int temp = num%10;
        num/=10;
        return (pow(temp, size)+amstrong(num, size));
    }
}