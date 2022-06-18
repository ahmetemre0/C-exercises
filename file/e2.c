#include <stdio.h>

int main(){
    char ch;
    FILE *fp = fopen("test.txt", "r");
    ch = fgetc(fp);
    while(ch != EOF){
        printf("%c", ch);
        ch = fgetc(fp);
    }
    fclose(fp);
}