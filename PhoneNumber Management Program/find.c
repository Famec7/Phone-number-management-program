#include "my_func.h"

TEL **tel_list;
int max_num;
int count;

void find_by_birth(TEL **tel_list){ //같은 달 생일인 사람 찾는 함수
    int find_birth, birth_;
    int i;

    printf("Birth:");
    scanf("%d", &find_birth); //같은 생일자의 월 입력

    for (i = 0; i < count; i++)
    {
        birth_ = (tel_list[i]->birth[4] - '0') * 10 + tel_list[i]->birth[5] - '0'; //1~12까지의 숫자 저장
        if(find_birth == birth_)
            printf("%s %s %s\n", tel_list[i]->name, tel_list[i]->tel_no, tel_list[i]->birth); //같은 생일자를 찾을 경우 이름, 전화번호, 생년월일 출력
    }
}