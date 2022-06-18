#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXWORD 1000
#define MAXLEN 20

int main(int argc, char *argv[]){
    FILE *src = fopen(argv[1], "r");
    FILE *dst = fopen(argv[2], "w");

    char words[MAXWORD][MAXLEN];
    int wordcounter;
    for(wordcounter = 0;!feof(src); wordcounter++){
        fscanf(src, "%s", words[wordcounter]);
    }

    int wordlength;
    int istheresame = 0;
    int sameword = 0;
    for(int i = 0; i < wordcounter;i++){
        sameword = 1;
        wordlength = strlen(words[i]);
        
        istheresame = 0;
        for(int j = 0; j < i; j++){
            if(wordlength == strlen(words[j])){
                for(int k = 0,same = 0; k < wordlength; k++){
                    if(words[i][k] == words[j][k]){
                        same++;
                    }
                    if(same == wordlength){
                        istheresame = 1;
                    }
                }
            }
        }
        if(!istheresame){
            for(int j = i + 1;j < wordcounter;j++){
                if(wordlength == strlen(words[j])){
                    for(int k = 0,same = 0; k < wordlength; k++){
                        if(words[i][k] == words[j][k]){
                            same++;
                        }
                        if(same == wordlength){
                            sameword++;
                        }
                    }
                }
            }
            fprintf(dst, "%s\t%d\n", words[i], sameword);
        }
    }
}