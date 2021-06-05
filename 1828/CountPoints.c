#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

int* countPoints(int** points, int pointsSize, int* pointsColSize, int** queries, int queriesSize, int* queriesColSize, int* returnSize){

    int* result = malloc(sizeof(int) * queriesSize);
    int count;
    for (int i = 0; i < queriesSize; i++){
        count = 0;
        for (int j = 0; j < pointsSize; j++){
            if (inCircle(*(queries + i), *(points + j)) == 1){
                count++;
            }
        }
        *(result + i) = count;
    }
    return result;

}

int inCircle(int* circle, int* point){
    double distance = pow(pow(*(circle + 0) - *(point + 0), 2) + pow(*(circle + 1) - *(point + 1), 2), 0.5);
    double radius = *(circle + 2);
    if (distance <= radius){
        return 1;
    } else{
        return 0;
    }
}