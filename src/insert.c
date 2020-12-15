#include "my_func.h"

TEL **tel_list;
int max_num;
int count;

void insert(){ //연락처 등록 함수
    char name[100] = {'\0'}, tel[100] = {'\0'}, birth[100] = {'\0'};
    int i, j;

    if(count >= max_num){ //저장용량을 넘기면
        printf("OVERFLOW\n");
        return; //OVERFLOW를 출력하고 종료
    }

    tel_list[count] = (TEL *)malloc(sizeof(TEL));
    if(tel_list[count] == NULL){ //메모리 할당 오류 체크
        printf("tel_list[count] Memory Error\n");
        return; //종료
    }
    
    printf("Name:");
    scanf("%s", name); //이름 입력
    printf("Phone_number:");
    scanf("%s", tel); //전화번호 입력
    printf("Birth:");
    scanf("%s", birth); //생년월일 입력

    sort(name, tel, birth);
    
    printf("<<%d>>\n", count); //연락처 저장된 개수 출력
}