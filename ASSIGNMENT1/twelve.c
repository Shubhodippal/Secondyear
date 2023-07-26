#include<stdio.h>
#include<stdbool.h>
bool check(char ch){
    int a = (int)ch;
    bool state;
    for(int i=48;i<=57;i++){
        if(a==i){
            state = true;
            break;
        }else{
            state = false;
        }
    }
    return state;
}
int main(){
    char ch;
    printf("Enter the input to check:");
    scanf("%s", &ch);
    if(check(ch)){
        printf("The entered input is integer");
    }else{
        printf("The given input is a character");
    }
}