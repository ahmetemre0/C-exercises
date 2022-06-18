#include <stdio.h>

int main(){
    printf("Pointer : Demonstrate the use of & and * operator :\n");
    printf("--------------------------------------------------------\n");

    int m = 300;
    double fx = 300.600006;
    char cht = 'z';

    printf("m = %d\n", m);
    printf("fx = %lf\n", fx);
    printf("cht = %c\n", cht);


    printf("Using & operator :\n");
    printf("-----------------------\n");

    printf("address of m = %p\n", &m);
    printf("address of fx = %p\n", &fx);
    printf("address of cht = %p\n", &cht);


    printf("Using & and * operator :\n");
    printf("-----------------------------\n");

    printf("value of m = %d\n", *(&m));
    printf("value of fx = %lf\n", *(&fx));
    printf("value of cht = %c\n", *(&cht));


    printf("Using only pointer variable :\n");
    printf("----------------------------------\n");

    int *mv = &m;
    double *fxv = &fx;
    char *chtv = &cht;

    printf("address of m = %p\n", mv);
    printf("address of fx = %p\n", fxv);
    printf("address of cht = %p\n", chtv);


    printf("Using only pointer operator :\n");
    printf("----------------------------------\n");
    
    printf("value at address of m = %d\n", *mv);
    printf("value at address of fx = %lf\n", *fxv);
    printf("value at address of cht = %c\n", *chtv);
}