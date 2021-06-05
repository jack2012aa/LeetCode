#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int getPower(int num){

    int count = 0;
    while (num != 1){
        if (num % 2 == 0){
            num /= 2;
        } else{
            num = 3 * num + 1;
        }
        count++;
    }
    return count;
}

int compar(const void* a, const void* b){

    int* aNum = a;
    int* bNum = b;
    int aPower = getPower(*aNum);
    int bPower = getPower(*bNum);
    if (aPower == bPower){
        return *aNum - *bNum;
    } else { 
        return aPower - bPower;
    }

}

int getKth(int lo, int hi, int k){

    int numsSize = hi - lo + 1;
    int* arr = malloc(sizeof(int) * numsSize);
    for (int i = 0; i < numsSize; i++){
        *(arr + i) = lo + i;
    }
    qsort(arr, numsSize, sizeof(int), compar);
    for (int i = 0; i < numsSize; i++){
        printf("%d\n", *(arr + i));
    }
    return *(arr + k - 1);

}

int main(){

    printf("%d", getKth(7, 11, 4));

    return 0;
}