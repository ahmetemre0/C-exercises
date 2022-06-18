#include <stdio.h>
#include <string.h>
#define MAX 256

int main(){
    char str[100][100];
    char newln[MAX];
    FILE *fp = fopen("test.txt","r");
    int i = 0;
    for(;!feof(fp);i++){
        fgets(str[i], sizeof str[i], fp);
    }
    fclose(fp);
    printf("hangi satir istion? : ");
    int n;
    scanf("%d", &n);
    printf("string gir mk: ");
    char *alline = fgets(newln, 1024, stdin);
    scanf("%[^'\n']s",alline);
    
    FILE *fp2 = fopen("test.txt","w");
    for(int j = 0;j < i;j++){
        if(j != n-1)
            fprintf(fp, "%s", str[j]);
        else{
            fprintf(fp, "%s\n", newln);
        }
    }
}