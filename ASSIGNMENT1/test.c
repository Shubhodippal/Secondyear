#include<stdio.h>
#include<string.h>
int main(){
    int state;
    printf("What do you want to do\nPress 1 for calculate the length of the string\nPress 2 for reverse the string\nPress 3 for concatination of two string\nPress 4 for copy one string to another\nPress 5 for comapre two string\n:");
    scanf("%d", &state);
    switch (state)
    {
    case 1:{
        
        char str[10];
        printf("enter the string");
        int size = strlen(str);
        printf("The size of the string is:%d", size);
        break;
    }
    case 2:{
        
        char str[10];
        printf("enter the string");
        gets(str);
        printf("After reversing the array is %s", strrev(str));
        break;
    }
    case 3:{
        char a[10];
        
        char b[10];
        printf("enter first string\n");
        scanf("%s",a);
        printf("enter second string");
        scanf("%s",b);

        printf("after concentration the string is \n%s", strcat(a,b));
    }
    case 4:{

        break;
    }
    case 5:{

        break;
    }
    default:
        break;
    }
}