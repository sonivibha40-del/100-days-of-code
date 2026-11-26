/*Write a program to take an integer array nums of size n, and print the majority element.
 The majority element is the element that appears strictly more than ⌊n / 2⌋ times.
 Print -1 if no such element exists.
 Note: Majority Element is not necessarily the element that is present most number of times.
*/
#include <stdio.h>
int findMajority(int *arr, int n) {
    int candidate = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = *(arr + i);
            count = 1;
        }
        else if (*(arr + i) == candidate) {
            count++;
        }
        else {
            count--;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == candidate) {
            count++;
        }
    }
    if (count > n / 2) {
        return candidate;
    }
    return -1;
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
    int result = findMajority(ptr, n);
    printf("Majority Element = %d\n", result);
    return 0;
}

