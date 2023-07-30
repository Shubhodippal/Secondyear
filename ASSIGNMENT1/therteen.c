#include<stdio.h>
#include<string.h>
int main(){
    int state;
    printf("What do you want to do\nPress 1 for calculate the length of the string\nPress 2 for reverse the string\nPress 3 for concatination of two string\nPress 4 for copy one string to another\nPress 5 for comapre two string\n:");
    scanf("%d", &state);
    switch (state)
    {
    case 1:{
        int n;
        printf("Enter the size of the string:");
        scanf("%d", &n);
        char str[n];
        int size = strlen(str);
        printf("The size of the array is%d", size);
        break;
    }
    case 2:{
        int n;
        printf("Enter the size of the string:");
        scanf("%d", &n);
        char str[n];
        printf("After reversing the array is %s", strrev(str));
        break;
    }
    case 3:{        
        char a[100];
        char b[100];

        printf("enter first string\n");
        scanf("%s",a);
        printf("enter second string");
        scanf("%s",b);

        printf("after concentration the string is \n%s", strcat(a,b));

    }
    case 4:{
        char str[100];
        char sstr[100];

        printf("enter the string:\n");
        scanf("%s",str);

        strcpy(sstr, str);

        printf("%s",sstr);
        break;
    }
    case 5:{
        
        char str1[20]; 
        char str2[20]; 

        int value;  

        printf("Enter the first string : ");  
        scanf("%s",str1);  
        printf("Enter the second string : ");  
        scanf("%s",str2);
           
        value=strcmp(str1,str2);  

        if(value==0){
            printf("strings are same");  
        }  
        else{
            printf("strings are not same"); 
        }  

        break;
    }
    default:
        printf("Wrong input");
        break;
    }
}