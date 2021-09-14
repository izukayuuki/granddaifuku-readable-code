#include<stdio.h>
#include<stdlib.h>

const int BUFFER_SIZE = 256;

int main(int argc, char* argv[]) {
    FILE *fp;
    char data[BUFFER_SIZE];
    char scanword[BUFFER_SIZE];
    
    int ID = 1;
    char searchID[BUFFER_SIZE]; //探したいID番号
    int convertID; //型変換したあと

    printf("ファイル名 ID番号の形式で入力してください：");
    scanf("%s", data);
    fgets(searchID, BUFFER_SIZE, stdin);
    convertID = atoi(searchID); //char型からint型に変換
    
    //ファイルを開けたかのif文
    if ((fp = fopen(data, "r")) == NULL) {
        printf("ファイルオープン失敗\n");
    } else {
        //ファイルオープンが成功した時の処理
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
