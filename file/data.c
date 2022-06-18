#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    char id[10];
    char name[15];
    char surname[15];
    int mts[2];
    int final;
    int lab;
}student;


student *std;

int main(){
    FILE *fp = fopen("data.txt", "r");
    int max = 0;
    int min = 100;
    std = calloc(6, sizeof(student));
    for (int i = 0; i < 5; i++){
        fscanf(fp, "%s %s %s %d %d %d %d", (std+i)->id, (std+i)->name, (std+i)->surname, &(std+i)->mts[0], &(std+i)->mts[1], &(std+i)->final, &(std+i)->lab);
        if((std+i)->final > max){
            max = (std+i)->final;
        }
        if((std+i)->final < min){
            min = (std+i)->final;
        }
    }
    printf("%d is max", max);
    printf("%d is min", min);
    fclose(fp);
    free(std);
}