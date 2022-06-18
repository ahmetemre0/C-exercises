#include <stdio.h>

#define LENGTH 5

int *swap(const int *);


int main(){
    int nums[LENGTH];
    for(int i = 0; i < LENGTH;i++){
        printf("Input the %d.element : ",i);
        scanf("%d",&nums[i]);
    }


    int *dst = swap(nums);

    for(int i = 0; i < LENGTH;printf("%d\n", dst[i]),i++);
    
}

int *swap(const int nums[]){
    int tmp;
    int *dst;
    for(int i = 1;i < LENGTH;i++){
        if(i == LENGTH - 1){
            dst[0] = nums[i];
            dst[i] = nums[i - 1];
        }
        else{
            dst[i] = nums[i - 1];
        }
    }
    return dst;
}