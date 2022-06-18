#include <stdio.h>

int main(){
    int arr[15];
    int num_of_elements;
    printf("Input the number of elements to store in the array (max 15) : ");
    scanf("%d", &num_of_elements);

    for(int i = 0; i < num_of_elements;i++){
        printf("element - %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int *pt = &arr[num_of_elements - 1];
    printf("\n");
    printf("The elements of array in reverse order are :\n");
    for(int i = num_of_elements; i > 0; i--){
        printf("element - %d : %d\n", i, *pt);
        pt--;
    }
}