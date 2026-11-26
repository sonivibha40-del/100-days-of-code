/*Write a Program to take a sorted array(say nums[])
 and an integer (say target) as inputs.
 The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence.
 Print -1, -1 if the target is not present.
*/
#include <stdio.h>
void findOccurrence(int arr[], int n, int target, int *first, int *last){
    *first = -1;
    *last = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            if(*first == -1){
                *first = i;
            }
            *last = i;
        }
    }
}
int main(){
    int n, target;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    int first, last;
    findOccurrence(arr, n, target, &first, &last);
    printf("%d,%d", first, last);
    printf("\n");
    return 0;
}
