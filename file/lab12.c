#include <stdio.h>
#include <stdlib.h>

typedef struct students
{
    char name[26];
    char id[5];
    int exam[3];
    int hw[3];
    char grade;
} students ;

void write_into_text_file(FILE *fp , students *student){
    for(int i = 0; i < 5; i++){
        fprintf(fp, "%s %s %d %d %d %d %d %d %c\n", student[i].name, student[i].id, student[i].exam[0], student[i].exam[1], student[i].exam[2], student[i].hw[0], student[i].hw[1], student[i].hw[2], student[i].grade);
    }
}

void read_from_binary_file(FILE *fp, students *student){
    for(int i = 0; i < 5; i++){
        fread(student+i, sizeof(struct students), 1, fp);
    }
}

void write_into_binary_file(FILE *fp, students *student){
    for(int i = 0; i < 5; i++){
        fwrite(student + i, sizeof(struct students), 1, fp);
    }
}

void read_from_text_file(FILE *fp, students *student){
    for(int i = 0; i < 5; i++){
        fscanf(fp, "%s %s %d %d %d %d %d %d %c\n", student[i].name, student[i].id, &student[i].exam[0], &student[i].exam[1], &student[i].exam[2], &student[i].hw[0], &student[i].hw[1], &student[i].hw[2], &student[i].grade);
    }
}

int main(int argc, char *argv[]){
    students *student;
    student = calloc(6 , sizeof(students));
    
    FILE *fpsrc = fopen(argv[1], "r");
    read_from_text_file(fpsrc , student);
    fclose(fpsrc);
    
    FILE *fpbin = fopen("student_bin", "wb");
    write_into_binary_file(fpbin , student);
    fclose(fpbin);
    
    FILE *fpbin2 = fopen("student_bin", "rb");
    read_from_binary_file(fpbin ,student);
    fclose(fpbin2);
    FILE *fpdst = fopen(argv[2], "w");
    write_into_text_file(fpdst, student);
    fclose(fpdst);
}