#include <stdlib.h>
#include <string.h>
#include<stdio.h>

int numIdenticalPairs(int* nums, int numsSize){
    int result = 0;
    for (int i = 0; i < numsSize; i++){
        for (int j = i + 1; j < numsSize; j++){
            printf("%d vs %d\n", *(nums+i), *(nums+j));
            if (*(nums + i) == *(nums + j))
                result++;
        }
    }
    return result;
}

void main(){
    const int numsSize = 6;
    int nums[] = {1, 2, 3, 1, 1, 3};
    printf("result: %d", numIdenticalPairs(nums, numsSize));

}