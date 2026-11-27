/*Write a program to take an integer array arr and an integer k as inputs.
 The task is to find the first negative integer in each subarray of size k moving from left to right.
 If no negative exists in a window, print "0" for that window.
 Print the results separated by spaces as output.
*/
#include <stdio.h>
int main(){
    int n, k, i, j;
    int firstNegative;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter k: ");
    scanf("%d", &k);
    if(k <= 0 || k > n){
        printf("Invalid k");
        return 0;
    }
    for(i = 0; i <= n-k; i++){
        firstNegative = 0;
        for(j = i; j < i+k; j++){
            if(arr[j] < 0){
                firstNegative = arr[j];
                break;
            }
        }
        printf("%d ", firstNegative);
    }
    printf("\n");
    return 0;
}
