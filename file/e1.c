#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp = fopen("test.txt", "w");
    char str[2000];
    fgets(str, sizeof str, stdin);
    fprintf(fp, "%s", str);
    printf("The file test.txt created successfully...!!");
    fclose(fp);
}