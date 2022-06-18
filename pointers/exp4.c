#include <stdio.h>

int main(){
    int firstnum;
    int secondnum;
    int *firstptr;
    int *secondptr;
    int sum;


    printf("Input the first number : ");
    scanf("%d", &firstnum);
    printf("Input the second number : ");
    scanf("%d", &secondnum);

    firstptr = &firstnum;
    secondptr = &secondnum;

    sum = *firstptr + *secondptr;

    printf("The sum of the entered numbers is : %d\n", sum);

}