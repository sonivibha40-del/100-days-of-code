//Count Characters in a String Without Using Built-in Length Functions
#include <stdio.h>

int main() {
    char str[1000];
    int count = 0;

    fgets(str, sizeof(str), stdin);

    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    printf("%d", count);

    return 0;
}
