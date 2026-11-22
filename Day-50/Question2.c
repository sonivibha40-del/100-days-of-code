//Print All Substrings of a String
#include <stdio.h>

int main() {
    char str[100];
    int len = 0;

    scanf("%s", str);

    while (str[len] != '\0')
        len++;

    int first = 1;

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {

            if (!first)
                printf(",");

            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }

            first = 0;
        }
    }

    return 0;
}
