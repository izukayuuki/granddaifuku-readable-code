#include<stdio.h>

#define BUFFER_SIZE 256

int main() {
    FILE *fp;
    char data[BUFFER_SIZE];
    char scanword[BUFFER_SIZE];
    //ここでファイルの入力をしていない
    if ((fp = fopen(data, "r")) == NULL) {
        printf("ファイルオープン失敗\n");
    } else {
        fscanf(fp, "%s", scanword);
        printf("%s", scanword);
    }
    fclose(fp);
    
    return 0;
}