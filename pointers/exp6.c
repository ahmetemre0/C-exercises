#include <stdio.h>

int main(){
    int firstnum;
    int secondnum;
    int *firstptr = &firstnum;
    int *secondptr = &secondnum;

    printf("Input the first number : ");
    scanf("%d", firstptr);
    printf("Input the second number : ");
    scanf("%d", secondptr);

    if(*firstptr > *secondptr){
        printf("%d is the maximum number.\n",*firstptr);
    }
    else if(*firstptr == *secondptr){
        printf("They are equal.\n");
    }
    else{
        printf("%d is the maximum number.\n",*secondptr);
    }
}