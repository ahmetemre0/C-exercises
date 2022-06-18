#include <stdio.h>

int add_two_numbers(int *, int *);
int main(){
    int firstnum;
    int secondnum;
    int sum;


    printf("Input the first number : ");
    scanf("%d", &firstnum);
    printf("Input the second number : ");
    scanf("%d", &secondnum);


    sum = add_two_numbers(&firstnum, &secondnum);

    printf("The sum of %d and %d is %d\n", firstnum, secondnum, sum);

}

int add_two_numbers(int *num1, int *num2){
    int sum;
    sum = *num1 + *num2;
    return sum;
}
