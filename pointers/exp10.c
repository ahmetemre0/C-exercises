#include <stdio.h>
#include <stdlib.h>
int length_of_string(char *);

int main(){
    char *str = malloc(100 * sizeof(char));
    printf("Input a string : ");
    scanf("%s", str);

    int string_length = length_of_string(str);
    printf("The length of the given string %s is : %d", str, string_length);

    free(str);
}

int length_of_string(char *str){
    int i = 0;
    for(; str[i] != '\0' ;i++);
    return i;
}