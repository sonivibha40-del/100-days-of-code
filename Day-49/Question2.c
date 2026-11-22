//Print Initials of a Name with the Surname Displayed in Full
#include <stdio.h>

int main() {
    char str[1000];
    int lastSpace = -1;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            lastSpace = i;
    }

    printf("%c.", str[0]);

    for (int i = 1; i < lastSpace; i++) {
        if (str[i - 1] == ' ' && str[i] != ' ')
            printf("%c.", str[i]);
    }

    printf(" ");

    for (int i = lastSpace + 1; str[i] != '\0' && str[i] != '\n'; i++) {
        printf("%c", str[i]);
    }

    return 0;
}
