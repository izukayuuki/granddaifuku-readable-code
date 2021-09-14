#include<stdio.h>

const int BUFFER_SIZE = 256;

int main() {
    FILE *fp;
    char data[BUFFER_SIZE];
    char scanword[BUFFER_SIZE];
    printf("ファイル名：");
    scanf("%s", data);
    if ((fp = fopen(data, "r")) == NULL) {
        printf("ファイルオープン失敗\n");
    } else {
        while (fscanf(fp, "%s", scanword) != EOF) {
            printf("%s\n", scanword);
        }
    }
    fclose(fp);
    
    return 0;
}