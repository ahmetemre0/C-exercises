#include <stdio.h>

int nowels_of(char *str, int length){
    int counter = 0;
    for(int i = 0; i < length; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            counter++;
        }
    }
    return counter;
}

int length_of(char *str){
    int i;
    for(i = 0; str[i] != '\0' ;i++);
    return i;
}

int consonants_of(int length, int nowels){
    return length - nowels;
}


int main(){
    char str[10];

    printf("Input a string: ");

    scanf("%s", str);

    int length = length_of(str);
    int nowels = nowels_of(str, length);
    int consonants = consonants_of(length,nowels);

    printf("Number of vowels : %d\n", nowels);
    printf("Number of consonants : %d\n", consonants);
}