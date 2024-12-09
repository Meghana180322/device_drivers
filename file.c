#include<stdio.h>
int main(){
    FILE *file;
    char buffer[100];
    char msg[]="hello,good morning";

    file = fopen("text.txt", "w");
    if (file == NULL) {
        printf("error opening a file");
        return 1;
    }
    fprintf(file, "%s\n", msg);
    fclose(file);
    printf("msg written successfully completed");

    file = fopen("text.txt", "r");
    if (file == NULL) {
        printf("error opening a file");
        return 0;
    }
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("read from file is: %s", buffer);
    }
    fclose(file);
    printf("the file reading is successfully completed");
    return 0;
}

