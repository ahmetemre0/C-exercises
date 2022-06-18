#include <stdio.h>
#include <stdlib.h>
void main(){
    FILE *fp = fopen("test.txt", "a");
    printf("how many line: ");
    int line;
    scanf("%d", &line);
    char newln[100];
    char *alline;
    for(int i = 0; i < line ;i++){
        alline = fgets(newln, 1024, stdin);
        scanf("%[^'\n']s", newln);
        fprintf(fp,"\n%s", newln);
    }
    fclose(fp);
}