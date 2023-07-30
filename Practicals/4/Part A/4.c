#include <stdio.h>
int main()
{
    char let;

    printf("Enter a letter : ");
    scanf("%s",&let);

    switch (let){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Entered letter is a vowel\n");
            break;
        default:
            printf("Entered letter is a non vowel");
}
}
