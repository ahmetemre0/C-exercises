#include <stdio.h>

int main(){
    int num_of_elements;
    int arr[10];
    int *elements = arr;
    int result  = 0;

    printf("Input the number of elements to store in the array (max 10) : ");
    scanf("%d" , &num_of_elements);

    for(int i = 0; i < num_of_elements; i++){
        printf("element - %d : ", i+1);
        scanf("%d" , elements+i);
        result += *(elements+i);
    }
    printf("\nThe sum of array is : %d\n", result);

}