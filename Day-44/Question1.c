//Count Spaces, Digits, and Special Characters in a String
#include <stdio.h>

int main() {
    char str[1000];
    int spaces = 0, digits = 0, special = 0, i = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if (!((str[i] >= 'A' && str[i] <= 'Z') ||
                   (str[i] >= 'a' && str[i] <= 'z') ||
                   str[i] == '\n'))
            special++;

        i++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;
}
