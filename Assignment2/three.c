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
        char str1[20]; 
        char str2[20]; 

        printf("Enter the first string : ");  
        scanf("%s",str1);  
        printf("Enter the second string : ");  
        scanf("%s",str2);

        if(strlen(str1)<strlen(str2)){
            printf("First String is smaller than the second one");
        }else{
            printf("The first string is not smaller than the second one");
        }

        break;
    }
    case 3:{
        
        char str1[20]; 
        char str2[20]; 

        printf("Enter the first string : ");  
        scanf("%s",str1);  
        printf("Enter the second string : ");  
        scanf("%s",str2);

        if(strlen(str2)>strlen(str1)){
            printf("Second String is greater");
        }else{
            printf("The second string is not greater");
        }
        break;
    }
    case 4:{
        char str1[20];  

        printf("Enter the first string : ");  
        scanf("%s",str1);  

        char left = str1[0];

        printf("The left most character is:%c", left);
        break;
    }
    case 5:{
        
        char str1[20];  

        printf("Enter the first string : ");  
        scanf("%s",str1);  

        char right = str1[strlen(str1)-1];

        printf("The right most character is:%c", right);
        break;
    }
    default:
        printf("Wrong Input");
        break;
    }
}