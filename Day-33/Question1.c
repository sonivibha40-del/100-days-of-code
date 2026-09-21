//Search in a sorted array using binary search
#include <stdio.h>
int main() {
    int a[100], n, i, key;
    int low, high, mid, found = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == key) {
            found = 1;
            break;
        }
        else if (key < a[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    if (found == 1)
        printf("Found at index %d\n", mid);
    else
        printf("Element not found\n");
    return 0;
}
