#include "my_func.h"

TEL **tel_list;
int max_num;
int count;

void delete_tel(){ //연락처 삭제하는 함수
    int i, j;
    char find_name[100];

    if(count == 0){ //삭제할 대상이 없을 경우
        printf("NO MEMBER\n");
        return; //NO MEMBER출력하고 종료
    }

    printf("Name:");
    scanf("%s", find_name); //삭제할 이름 입력

    for (i = 0; i < count; i++)
    {
        if(strcmp(find_name, tel_list[i]->name) == 0){ //삭제할 닉네임이 존재할 경우
            free(tel_list[i]->name);
            free(tel_list[i]->tel_no);
            free(tel_list[i]->birth); //구조체 멤버 메모리 해제
            free(tel_list[i]); //구조체 메모리 해제
            for (j = i; j < count - 1; j++) //한칸씩 앞으로 이동
            {
                tel_list[j] = tel_list[j + 1];
            }
            break; //연락처 삭제
        }
    }
    count--;
}