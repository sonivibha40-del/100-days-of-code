//Rotate an array to the right by k positions.
#include <stdio.h>
void rotateRight(int arr[], int n, int k){
    int temp[100];
    k = k % n;
    for (int i = 0; i < n; i++){
        temp[(i + k) % n] = *(arr + i);
    }
    for (int i = 0; i < n; i++){
        *(arr + i) = temp[i];
    }
}
int main(){
    int arr[100], n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);
    rotateRight(arr, n, k);
    printf("Array after rotation: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

