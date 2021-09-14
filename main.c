#include<stdio.h>
#include<stdlib.h>

const int BUFFER_SIZE = 256;

int main(int argc, char* argv[]) {
    FILE *fp;
    char data[BUFFER_SIZE];
    char scanword[BUFFER_SIZE];
    
    int ID = 1;
    char searchID[BUFFER_SIZE];
    int convertID;

    printf("ファイル名 ID番号の形式で入力してください：");
    scanf("%s", data);
    fgets(searchID, BUFFER_SIZE, stdin);
    convertID = atoi(searchID);
    
    if ((fp = fopen(data, "r")) == NULL) {
        printf("ファイルオープン失敗\n");
    } else {
        if (convertID == 0) {
            while (fscanf(fp, "%s", scanword) != EOF) {
                printf("%d: %s\n", ID, scanword);
                ID++;
            }
        } else {
            while (fscanf(fp, "%s", scanword) != EOF) {
                if (ID == convertID){
                    printf("%d: %s\n", ID, scanword);
                }
                ID++;
            }
        }
    }
    fclose(fp);
    
    return 0;
}
