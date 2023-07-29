#include<stdio.h>
int main(){
    int state;
    printf("What operation do you want to perform:\nPress 1 to calculate the length of a string\nPress 2 to reverse the string\nPress 3 to concatinate of one string to another\nPress 4 for copy one string to another\nPress 5 for compare two string");
    scanf("%d", &state);
    char str[100];
    switch (state)
    {
    case 1:
        int a = sizeof(str);
        printf("%d", a);
        break;
    case 2:
        
    default:
        break;
    }
}