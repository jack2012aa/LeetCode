#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>

int isDigit(char c){
    int ascii = (int) c;
    if (ascii >= 48 && ascii <= 57){
        return 1;
    }
    return 0;
}

int getDigit(char c){
    return ((int) c) - 48;
}

int myAtoi(char * s){

    int i = 0;
    while (*(s + i) == ' '){
        i++;
    }

    int sign = 1;
    if (*(s + i) == '-'){
        sign = -1;
        i++;
    } else if (*(s + i) == '+'){
        i++;
    }

    long num = 0;
    while (isDigit(*(s + i)) == 1){
        num = num * 10 + getDigit(*(s + i++));
        if (num > INT_MAX){
            break;
        }
    }

    num *= sign;

    int result = 0;
    if (num <= INT_MIN){
        result = INT_MIN;
    } else if (num >= INT_MAX){
        result = INT_MAX;
    } else {
        result = num;
    }

    return result;

}

int main(){

    char* str = "-91283472332";
    printf("%d\n", myAtoi(str));

    return 0;
}