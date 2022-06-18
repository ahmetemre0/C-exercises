#include <stdio.h>

struct employee
{
    char *name;
    char *adress;
}
employee = {"Ahmet Emre", "Ayazaga Kampus"}, *pt = &employee;


int main(){
    printf("%s from %s \n", (*pt).name , (*pt).adress);
}