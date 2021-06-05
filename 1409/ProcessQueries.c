#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int* processQueries(int* queries, int queriesSize, int m, int* returnSize){

    *returnSize = queriesSize;
    int position;
    int* permutation = malloc(sizeof(int) * m);
    for (int i = 0; i < m; i++){
        *(permutation + i) = i + 1;
    }

    int* result = malloc(sizeof(int) * queriesSize);
    for (int i = 0; i < queriesSize; i++){
        for (int j = 0; j < m; j++){
            if (*(queries + i) == *(permutation + j)){
                position = j;
                changePosition(permutation, m, j);
            }
        }
        *(result + i) = position;
    }
    return result;
}

void changePosition(int* permutation, int permutationSize, int position){
    int temp = *(permutation + position);
    for (int i = position; i > 0; i--){
        *(permutation + i) = *(permutation + i - 1);
    }
    *(permutation) = temp;
}