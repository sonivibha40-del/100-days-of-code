//Find the First Repeating Lowercase Alphabet in a String
#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0};
    int i = 0;

    scanf("%s", str);

    while (str[i] != '\0') {
        freq[str[i] - 'a']++;
        i++;
    }

    i = 0;
    while (str[i] != '\0') {
        if (freq[str[i] - 'a'] > 1) {
            printf("%c\n", str[i]);
            break;
        }
        i++;
    }

    return 0;
}
