#include <stdlib.h>
#include <string.h>
#include<stdio.h>

int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int* result = malloc(numsSize * sizeof(int));
    for (int i = 0; i < n; i++){
        *(result + 2 * i) = *(nums + i);
        *(result + 2 * i + 1) = *(nums + n + i);
        printf("%d, %d, ", *(result + 2 * i), *(result + 2 * i + 1));
    }
    *returnSize = 2 * n;
    return result;
}

void main(){

    int n = 4;
    int numsSize = 2 * n;
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int* result, returnSize;

    result = shuffle(arr, numsSize, n, returnSize);

    for (int i = 0; i < 8; i++){
        printf("%d: %d\n", i, *(result + i));
    }

}