#include "my_func.h"

TEL **tel_list;
int count;

void RegToFile(FILE *fp){ //등록된 정보를 파일에 등록하는 함수
    for (int i = 0; i < count; i++)
    {
        fputs(tel_list[i]->name, fp);
        fputs(" ", fp);
        fputs(tel_list[i]->tel_no, fp);
        fputs(" ", fp);
        fputs(tel_list[i]->birth, fp);
        fputs("\n", fp);
    }
}