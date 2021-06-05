#include <stdlib.h>
#include <string.h>
#include<stdio.h>

int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize){

    int count;
    *returnSize = numsSize; 
    int *result = malloc(sizeof(int) * numsSize);
    for (int i = 0; i < numsSize; i++){
        count = 0;
        for (int j = 0; j < numsSize; j++){
            if (*(nums + i) > *(nums + j)){
                count++;
            }
        }
        *(result + i) = count;
    }
    return result;
}

int main(){

    int nums[] = {8, 1, 2, 2, 3};
    int numsSize = 5;
    int* result;
    int* returnSize;

    result = smallerNumbersThanCurrent(nums, numsSize, returnSize);
    for (int i = 0; i < *returnSize; i++){
        printf("%d ", *(result + i));
    }

    free(result);

    return 0;

}