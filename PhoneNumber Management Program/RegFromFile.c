#include "my_func.h"

TEL **tel_list;
int max_num;
int count;

void RegFromFile(){ //파일로부터 정보를 받는 함수
    FILE *fp = fopen("PHONE_BOOK.txt", "r");
    char name[100] = {'\0'}, tel[100] = {'\0'}, birth[100] = {'\0'};

    if(fp == NULL){
        printf("Couldn't open file\n");
        return;
    }

    while (!feof(fp))
    {
        if(count > max_num){
            printf("OVERFLOW\n");
            return;
        }
        fscanf(fp, "%s %s %s", name, tel, birth);

        tel_list[count] = (TEL *)malloc(sizeof(TEL));
        if(tel_list[count] == NULL){ //메모리 할당 오류 체크
            printf("tel_list[count] Memory Error\n");
            return; //종료
        }

        sort(name, tel, birth);
    }

    fclose(fp);
}