#include<stdio.h>
#include<string.h>
int main(){
    int state;
    printf("Press 1 to check if two string is equal or not\nPres 2 to check if first string is smaller than second string\nPress 3 to check if second string is greater\nPress 4 to extract left most n character\nPress 5 to extract right most n character");
    scanf("%d", &state);
    switch (state)
    {
    case 1:{

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
    case 2:{
        char str[99];

        printf("Enter the string");
        fgets(str, 99, stdin);
        printf("%s", str);
        int size = sizeof(str);
        int l = strlen(str);

        printf("%d  %d",size, l);

        break;
    }
    case 3:{
        
        break;
    }
    case 4:{

        break;
    }
    case 5:{

        break;
    }
    default:
        printf(" ");
        break;
    }
}