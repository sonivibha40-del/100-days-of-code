/*
Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/
#include <stdio.h>
int main() {
    int i, j, n;
    int stars[] = {1, 4, 5, 3, 1};
    for (i = 0; i < 5; i++) {
        for (j = 1; j <= stars[i]; j++) {
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}
