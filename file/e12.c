#include <stdio.h>

int main(int argc, char *argv[]){
    FILE *fpsrc1 = fopen(argv[1], "r");
    FILE *fpsrc2 = fopen(argv[2], "r");
    FILE *fpdst = fopen(argv[3], "w");
    char line[100];
    for(int i = 0; !feof(fpsrc1);i++){
        fgets(line , sizeof line, fpsrc1);
        fputs(line , fpdst);
    }
    fprintf(fpdst, "\n");
    for(int i = 0; !feof(fpsrc2);i++){
        fgets(line , sizeof line, fpsrc2);
        fputs(line , fpdst);
    }
    fclose(fpsrc1);
    fclose(fpsrc2);
    fclose(fpdst);
}