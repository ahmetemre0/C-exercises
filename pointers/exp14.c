#include <stdio.h>
#include <stdlib.h>

void sort_the_array(int n, const int* nums, int* sorted_nums){
    int change = 1;
    for(int i = 0; i < n;sorted_nums[i] = nums[i],i++);
    int tmp;
    while (1)
    {
        change = 0;
        for(int i = 0; i < n - 1; i++){
            if(*(sorted_nums + i) > *(sorted_nums +i+1)){
                tmp = sorted_nums[i];
                sorted_nums[i] = sorted_nums[i+1];
                sorted_nums[i+1] = tmp;
                change++;
            }
        }
        if(change == 0){
            break;
        }        
    }
    
}

void print_array(int *arr, int n){
    for(int i = 0; i < n;i++){
        printf("element-%d : %d\n",i+1,arr[i]);
    }
}

int main(){
    int num_of_elements;
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &num_of_elements);
    
    int *nums = malloc(num_of_elements * sizeof(int));

    for(int i = 0;i < num_of_elements;i++){
        printf("element - %d : ", i+1);
        scanf("%d", &nums[i]);
    }

    int *sorted_nums = malloc(num_of_elements * sizeof(int));

    sort_the_array(num_of_elements,nums, sorted_nums);

    print_array(sorted_nums,num_of_elements);

    free(sorted_nums);
    free(nums);
}