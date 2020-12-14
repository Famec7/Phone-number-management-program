#include "my_func.h"

TEL **tel_list;
int max_num;
int count;

void print_all(){ //연락처 출력하는 함수
    int i;

    for (i = 0; i < count; i++)
    {
        printf("%s %s %s\n", tel_list[i]->name, tel_list[i]->tel_no, tel_list[i]->birth);
    } //이름, 연락처, 생년월일 출력
}