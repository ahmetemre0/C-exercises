#include <stdio.h>
#include <stdlib.h>

void rotate_right(char *dst, const char *src, int n){
    int length = 0;
    
    while(src[length]){
        length++;
    }
    n %= length;

    for(int i = 0;i < length;i++){
        if(i < n){
            dst[i] = src[length - i - 1];
        }
        else{
            dst[i] = src[i - n];
        }
    }
}

int main(){
    char *str = calloc(20 , sizeof(char));
    char *dst = calloc(20 , sizeof(char));
    int n;
    printf("Enter the string to rotate: ");
    scanf("%s", str);
    printf("Enter the rotate number: ");
    scanf("%d", &n);
    rotate_right(dst, str, n);

    printf("Rotated string: %s", dst);
    free(dst);
    free(str);
}
