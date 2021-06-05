#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int minPairSum(int* nums, int numsSize){

    qsort(nums, numsSize, sizeof(int), compar);
    int maxPair = *(nums) + *(nums + numsSize - 1);
    for (int i = 0; i < numsSize / 2; i++){
        if (maxPair > *(nums + i) + *(nums + numsSize - 1 - i)){
            maxPair = *(nums + i) + *(nums + numsSize - 1 - i);
        }
    }

    return maxPair;

}

int compar(const void* a, const void *b){
    int* aNum = a;
    int * bNum = b;
    return *aNum - *bNum;
}