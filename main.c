#include<stdio.h>

const int BUFFER_SIZE = 256;

int main() {
    FILE *fp;
    char data[BUFFER_SIZE];
    char scanword[BUFFER_SIZE];
    scanf("ファイル名：%s", data);
    if ((fp = fopen(data, "r")) == NULL) {
        printf("ファイルオープン失敗\n");
    } else {
        fscanf(fp, "%s", scanword);
        printf("%s\n", scanword);
    }
    fclose(fp);
    
    return 0;
}