#include <stdio.h>
#include <string.h>

int main() {
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
