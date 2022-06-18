#include <stdio.h>
#include <string.h>
#define MAXWORD 1000
#define MAXLEN 20

void writeinto(FILE *dst, char **words,int wordcounter){
    for(int i = 0 ; i < wordcounter; i++){
        fprintf(dst, "%s", words[i]);
    }
}

void change(char *old, char *new, int lengthold){
    int lengthnew = strlen(new);
    for(int i = 0 ; i < lengthnew; i++){
        old[i] = new[i];
    }
    if(lengthold > lengthnew){
        for(int i = lengthnew; i < lengthold; i++){
            old[i] = '\0';
        }
    }
}

int findsame(int i, int length, char **words, char *old){
    int same = 0;
    for(int j = 0 ; j < length; j++){
            if(words[i][j] == old[j]){
                same++;
            }
        
        return same;
    }
}

void findandchange(char *old , char *new, char **words, int wordcounter){
    int length;
    for (int i = 0 ; i < wordcounter ; i++){
        length = strlen(words[i]);
        if(findsame(i, length, words[i], old) == length){
            change(words[i] , new, length);
        }
    }
}


void readwords(int *wordcounter, char **words, FILE *src){
    for(*wordcounter = 0;!feof(src); wordcounter++){
        fscanf(src, "%s", words[*wordcounter]);
    }
}


int main(int argc, char *argv[]){
    FILE *src = fopen(argv[1], "r");
    char *old;
    char *new;
    printf("Write the word you will change: ");
    sscanf(old,"%s");
    printf("Write the word you will replace: ");
    scanf("%s", new);
    
    char words[MAXWORD][MAXLEN];
    int wordcounter;
    readwords(&wordcounter, words, src);
    fclose(src);
    findandchange(old, new, words, wordcounter);
    FILE *dst = fopen(argv[1], "w");
    writeinto(dst, words, wordcounter);
    fclose(dst);
}