/*Write a program to take an array arr[] of integers as input,
 the task is to find the next greater element for each element of
 the array in order of their appearance in the array.
 Next greater element of an element in the array is the nearest
 element on the right which is greater than the current element.
 If there does not exist next greater of current element,
 then next greater element for current element is -1.
*/
#include <stdio.h>
void nextGreater(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        int next = -1;
        for (int j = i + 1; j < n; j++) {
            if (*(arr + j) > *(arr + i)) {
                next = *(arr + j);
                break;
            }
        }
        printf("%d", next);
        if (i < n - 1) {
            printf(", ");
        }
    }
}
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid array size\n");
        return 0;
    }
    int arr[n];
    int *ptr = arr;
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }
    printf("Next Greater Elements: ");
    nextGreater(ptr, n);
    printf("\n");
    return 0;
}

