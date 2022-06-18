#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAXLENGTH 20


int length(char *str){
	int i = 0;
	while(*(str + i)){
		i++;
	}
	return i;
}


void add(char *dst, char *src){
	int srcl = length(src);
	int dstl = length(dst);
	for(int i = 0; i < srcl; i++){
		dst[dstl + i] = src[i];
	}
}

void select(char *dst, char *str, int start, int amount){
    
    for(int i = 0; i < amount; i++){
        dst[i] = str[start + i];
    }
}

void mailtype3(char *mail, char *name, char *surname, char *birthyear){
	add(mail, surname);
	add(mail, name);
	add(mail, birthyear);
}

void mailtype2(char *mail, char *name, char *surname, char *birthyear){
	char tmp[MAXLENGTH];
    select(tmp, name, 0, 2);
    add(mail, tmp);
	select(tmp, surname, 0, 2);
    add(mail, tmp);
	for(int i = 0; i < 4;i++){
		tmp[i] = '0' + rand()%10;
	}
	add(mail, tmp);
}

void mailtype1(char *mail, char *name, char *surname, char *birthyear){
    char tmp[MAXLENGTH];
    select(tmp, name, 0, 1);
    add(mail, tmp);
    add(mail, surname);
    select(tmp, birthyear,2,2);
    add(mail, tmp);
    
}

void print_mail(char *mail){
	printf("%s@itu.edu.tr\n", mail);
}

void generatemails(char *name, char *surname, char *birthyear){
	char *mail1 = calloc((MAXLENGTH + 3 + 1) , sizeof(char));
	mailtype1(mail1, name, surname, birthyear);

	char *mail2 = calloc(8 + 1, sizeof(char));
	mailtype2(mail2, name, surname, birthyear);

	char *mail3 = calloc((MAXLENGTH*2 + 4 + 1) , sizeof(char));
	mailtype3(mail3, name, surname, birthyear);

	print_mail(mail1);
	print_mail(mail2);
	print_mail(mail3);
	free(mail1);
	free(mail2);
	free(mail3);
}

int main(){
	srand(time(NULL));
	char *name = malloc(MAXLENGTH * sizeof(char));
	char *surname = malloc(MAXLENGTH * sizeof(char));
	char *birthyear = malloc(MAXLENGTH * sizeof(char));


	printf("Enter Your Name: ");
	scanf("%s", name);
	printf("Enter Your Surname: ");
	scanf("%s", surname);
	printf("Enter Your Birthyear: ");
	scanf("%s", birthyear);

	generatemails(name, surname, birthyear);

	free(name);
	free(surname);
	free(birthyear);
}

