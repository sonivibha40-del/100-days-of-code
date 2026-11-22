//Print the initials of a name.
#include <stdio.h>

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);

    if (str[0] != ' ')
        printf("%c.", str[0]);

    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ' && str[i] != ' ' && str[i] != '\n') {
            printf("%c.", str[i]);
        }
    }

    return 0;
}
