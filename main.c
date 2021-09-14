#include<stdio.h>

const int BUFFER_SIZE = 256;

int main() {
    FILE *fp;
    char data[BUFFER_SIZE];
    char scanword[BUFFER_SIZE];
    int ID = 1;

    printf("ファイル名：");
    scanf("%s", data);
    if ((fp = fopen(data, "r")) == NULL) {
        printf("ファイルオープン失敗\n");
    } else {
        while (fscanf(fp, "%s", scanword) != EOF) {
            printf("%d: %s\n", ID, scanword);
            ID++;
        }
    }
    fclose(fp);
    
    return 0;
}