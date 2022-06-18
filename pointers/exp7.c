#include <stdio.h>
#include <stdlib.h>

int main(){
    int numofelm;
    printf("Input the number of elements to store in the array :");
    scanf("%d", &numofelm);

    int *arr = malloc(numofelm * sizeof(int));
    
    printf("Input 5 number of elements in the array :\n");
    for(int i = 0; i < numofelm;i++){
        printf("element-%d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    printf("The elements you entered are :\n");
    for(int i = 0; i < numofelm;i++){
        printf("element-%d : %d\n", i, arr[i]);
    }
}