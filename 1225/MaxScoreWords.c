#include <stdlib.h>
#include <math.h>

int getScore(char* word, int* scoreList);
int* getLettersCount(char* word);

int maxScoreWords(char ** words, int wordsSize, char* letters, int lettersSize, int* score, int scoreSize){

    int* lettersCount = malloc(sizeof(int) * 26);
    for (int i = 0; i < 26; i++){
        *(lettersCount + i) = 0;
    }

    for (int i = 0; i < lettersSize; i++){
        int ascii = (int) *(letters + i) - 97;
        *(lettersCount + ascii) += 1;
    }

    int* scoreList = malloc(sizeof(int) * wordsSize);
    int** lettersCountList = malloc(sizeof(int*) * wordsSize);
    for (int i = 0; i < wordsSize; i++){
        *(scoreList + i) = getScore(*(words + i), score);
        *(lettersCountList + i) = getLettersCount(*(words + i));
    }

    for (int i = 0; i < pow(2, wordsSize); i++){
        
    }

    free(lettersCount);
    free(scoreList);
    free(lettersCountList);


}

int* getLettersCount(char* word){
    
    int* lettersCountOfWord = malloc(sizeof(int) * 26);
    for (int i = 0; i < 26; i++){
        *(lettersCountOfWord + i) = 0;
    }

    int i = 0;
    while(*(word + i) != '\0'){
        int ascii = (int) *(word + i) - 97;
        *(lettersCountOfWord + ascii) += 1;
        i++;
    }

    return lettersCountOfWord;
}

int getScore(char* word, int* score){

    int i = 0;
    int scoreOfWord = 0;
    while(*(word + i) != '\0'){
        int ascii = (int) *(word + i) - 97;
        scoreOfWord += *(score + ascii);
        i++;
    }
    
    return scoreOfWord;

}