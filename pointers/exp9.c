#include <stdio.h>
#include <stdlib.h>

void getnum(int ,const int *);
int findmax(int ,const int *);

int main(){
    int size;
    printf("Input total number of elements: ");
    scanf("%d", &size);
    int *num = malloc(size * sizeof(int));

    getnum(size, num);

    int max = findmax(size, num);

    printf("The Largest element is :  %d", max);
}

void getnum(int size ,const int *num){
    for(int i = 0; i < size; i++){
        printf("Number %d: ", i);
        scanf("%d", &num[i]);
    }
}

int findmax(int size ,const int *num){
    int max = num[0];
    for(int i = 0; i < size; i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    return max;
}