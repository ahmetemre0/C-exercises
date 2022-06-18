#include <stdio.h>


int *find_larger(int *f, int *s){
    if(*f < *s){
        return s;
    }
    else if(*s < *f){
        return f;
    }
}



int main(){
    int first_num;
    int second_num;

    printf("Input the first number : ");
    scanf("%d", &first_num);
    printf("Input the second number : ");
    scanf("%d", &second_num);

    int *larger = find_larger(&first_num, &second_num);

    printf("The number %d is larger.\n", *larger);
}