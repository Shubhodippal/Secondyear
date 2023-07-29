#include<stdio.h>
#include<string.h>
int concatinate(){
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    char inputSString[100];

    printf("Enter a string: ");
    fgets(inputSString, sizeof(inputSString), stdin);

    inputString[strcspn(inputString, "\n")] = '\0';
    inputSString[strcspn(inputSString, "\n")] = '\0';
    
    printf("You entered: %s", strcat(inputString, inputSString));

    return 0;
}
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
        concatinate();
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