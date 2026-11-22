//Reverse Each Word in a Sentence Without Changing Word Order
#include <stdio.h>

int main() {
    char str[1000];
    int start = 0, end, i = 0;

    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            end = i - 1;

            for (int j = end; j >= start; j--) {
                printf("%c", str[j]);
            }

            if (str[i] == ' ')
                printf(" ");
            else
                break;

            start = i + 1;
        }
        i++;
    }

    return 0;
}
