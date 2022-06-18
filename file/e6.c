#include <stdio.h>

int main(){
    FILE *fp = fopen("test.txt", "r");
    char str[1000];
    int i = 0;
    while(!feof(fp)){
        fgets(str, sizeof str, fp);
        printf("%s",str);
        i++;
    }
    printf("\n%d",i);
}