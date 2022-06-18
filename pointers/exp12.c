#include <stdio.h>

void factorial(int , int *);

int main(){
    int num;
    printf("Input a number : ");
    scanf("%d", &num);

    int fact;
    factorial(num , &fact);

    printf("The factorial of %d is : %d", num , fact);
}

void factorial(int num, int *f){
    *f = 1;
    for(int i = 2; i <= num;i++){
        *f = *f * i;
    }
}