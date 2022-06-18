#include <stdio.h>

int main(int argc, char *argv[]){
    FILE *fpsrc = fopen(argv[1], "r");
    FILE *fpdst = fopen(argv[2], "w");
    char line[100];
    for(int i = 0; !feof(fpsrc);i++){
        fgets(line , sizeof line, fpsrc);
        fputs(line , fpdst);
    }
    fclose(fpsrc);
    fclose(fpdst);
}