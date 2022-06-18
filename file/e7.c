#include <stdio.h>
#include <string.h>


int main(){
    FILE *fp = fopen("test.txt", "r");
    char word[100];
    int chcounter = 0;
    int wcounter = 0;

    while(!feof(fp)){
        fscanf(fp ,"%s", word);
        wcounter++;
        chcounter += strlen(word);
    }
    printf("words : %d", wcounter);
    printf("characters : %d", chcounter);

}