#include "my_func.h"

extern TEL **tel_list; //연락처 저장

extern int max_num; //최대 등록 개수
extern int count; //연락처에 등록된 개수

int main(){
    FILE *fp = fopen("PHONE_BOOK.txt", "w");
    int n;

    if(fp == NULL){
        printf("Couldn't open file\n");
        return -1;
    }

    printf("Max_num:");
    scanf("%d", &max_num);

    tel_list = (TEL **)malloc(sizeof(TEL *) * max_num);

    if(tel_list == NULL){ //메모리 할당 오류 체크
        printf("tel_list Memory Error\n");
        return -1; //비정상 종료
    }

    while (1) //연락처 관리
    {
        printf("*****Menu*****\n");
        printf("<1.Registration><2.ShowAll><3.Delete><4.FindByBirth><5.RegFromFile><6.Exit>\n");
        printf("Enter_the_menu_number:");
        scanf("%d", &n); //번호 입력 (1번 ~ 5번)

        switch (n) //번호에 따라 수행
        {
        case 1: //등록
            insert();
            break;
        case 2: //출력
            print_all();
            break;
        case 3: //삭제
            delete_tel();
            break;
        case 4: //같은 달 생일 찾기
            find_by_birth();
            break;
        case 5: //파일로부터 정보를 받기
            RegFromFile();
            break;
        case 6: //등록된 정보를 파일에 저장하고 종료
            RegToFile(fp);
            fclose(fp);
            return 0;
        default:
            break;
        } //count에 연락처 정보가 담긴 개수 저장
    }
    
    return 0;
}