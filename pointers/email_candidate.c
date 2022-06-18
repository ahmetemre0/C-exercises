#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fib(char *tmp1,char *tmp3,char *tmp2,char *a, char *b, int n){
    int la = strlen(a);
    int lb = strlen(b);
    if(la >= n){
        printf("%c" , a[n + 1]);
        
        return;
        }
    if(lb >= n){
        printf("%c" , b[n + 1]);
        
        return;
        }
    strcat(tmp1, a);
    strcat(tmp1, b);
    if(strlen(tmp1) >= n){
        printf("%c" , tmp1[n + 1]);
        
        return;
    }
    strcat(tmp2, b);
    strcat(tmp2, tmp1);
    if(strlen(tmp2) >= n){
        printf("%c" , tmp2[n + 1]);
        
        return;
    }
    while (strlen(tmp2) < n){
        strcpy(tmp3, tmp2);
        strcat(tmp2, tmp1);
        strcpy(tmp1, tmp3);
    }
    printf("%c" , tmp2[n + 1]);
    
}

int main() {
    char *a = "8214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196";
    char *b = "1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    char *tmp1 = calloc(pow(2, 100) + 1 , sizeof(char));
    char *tmp2 = calloc(pow(2, 100) + 1 , sizeof(char));
    char *tmp3 = calloc(pow(2, 100) + 1 , sizeof(char));
    
    
    
    unsigned long long int n = 104683731294243150;
    
        
    fib(tmp1,tmp2,tmp3,a,b,n);
    free(tmp1);
    free(tmp2);
    free(tmp3);
  
    return 0;
}
