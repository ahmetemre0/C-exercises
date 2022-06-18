#include <stdio.h>

int main(){
    FILE *fp = fopen("test.txt", "r");
    char str[1000];
    int n;
    printf("How many satir istion? : ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        fgets(str, sizeof str, fp);
        printf("%s", str);
    }
}