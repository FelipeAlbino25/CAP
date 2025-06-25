#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_vowel(char input)
{

    input = tolower(input);

    if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u')
    {
        return 1;
    }
    return 0;
}

int is_lowercase(char input)
{
    return input >= 97 && input <= 122;
}
int main(void)
{
    printf("%d", is_vowel('b'));
    printf("%d", is_lowercase('z'));
}