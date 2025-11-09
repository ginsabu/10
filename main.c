#include <stdio.h>

void main(void){
    FILE *fp = NULL;
    char c;

    fp = fopen("sample.txt", "r");
    if (fp == NULL)
        printf("cannot open file\n");

    // Read characters until EOF
    while ((c = fgetc(fp)) != EOF)
        putchar(c);   // print the character

    fclose(fp);
}