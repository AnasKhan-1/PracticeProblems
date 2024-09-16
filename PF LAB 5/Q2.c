#include <stdio.h>

int main()
{
    char Character;
    printf("Enter an alphabet: ");
    scanf(" %c", &Character); 

    if (Character == 'a' || Character == 'e' || Character == 'i' || Character == 'o' || Character == 'u') {
        printf("Character is a vowel");
    } else {
        printf("Character is a consonant");
    }

    return 0;
}
