/*Write a program to take an array arr[] of integers as input,
 the task is to find the previous greater element for each element
 of the array in order of their appearance in the array.
 Previous greater element of an element in the array is the
 nearest element on the left which is greater than the current element.
 If there does not exist next greater of current element,
 then previous greater element for current element is -1.
*/
#include <stdio.h>
struct Element {
    int value;
    int nextGreater;
};
void findNextGreater(struct Element *arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i].nextGreater = -1;
        for (int j = i + 1; j < n; j++) {
            if ((arr + j)->value > (arr + i)->value) {
                (arr + i)->nextGreater = (arr + j)->value;
                break;
            }
        }
    }
}
void display(struct Element *arr, int n) {
    printf("Next Greater Elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d", (arr + i)->nextGreater);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid array size\n");
        return 0;
    }
    struct Element arr[n];
    struct Element *ptr = arr;
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &(ptr + i)->value);
    }
    findNextGreater(ptr, n);
    display(ptr, n);
    return 0;
}
