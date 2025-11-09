#include <stdio.h>

int main(void) {
    char word1[50];
    char word2[50];
    char word3[50];
    FILE *fp;

    printf("input a word: ");
    scanf("%s", word1);

    printf("input a word: ");
    scanf("%s", word2);

    printf("input a word: ");
    scanf("%s", word3);

    fp = fopen("sample.txt", "w");
    if (fp == NULL) {
        printf("File open error!\n");
        return 1;
    }

    fprintf(fp, "%s\n", word1);
    fprintf(fp, "%s\n", word2);
    fprintf(fp, "%s\n", word3);

    fclose(fp);

    return 0;
}