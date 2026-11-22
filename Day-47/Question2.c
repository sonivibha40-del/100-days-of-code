//Find the Longest Word in a Sentence
#include <stdio.h>

int main() {
    char str[1000];
    int i = 0, start = 0;
    int maxLen = 0, maxStart = 0;

    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            int len = i - start;

            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
            }

            if (str[i] == '\0' || str[i] == '\n')
                break;

            start = i + 1;
        }

        i++;
    }

    for (i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}

