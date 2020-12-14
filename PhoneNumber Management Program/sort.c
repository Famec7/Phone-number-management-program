#include "my_func.h"

TEL **tel_list;
int max_num;
int count;

void sort(char name[], char tel[], char birth[]){ //이름 순으로 정렬하는 함수
    int i, j;

    for (i = 0; i < count + 1; i++) //사전 순서로 저장
    {
        if(i == count){ //비교대상이 없거나 끝에 저장할 경우
            tel_list[i]->name = (char *)malloc(sizeof(char) * (strlen(name) + 1));
            if(tel_list[i]->name == NULL){ //메모리 할당 오류 체크
                printf("name Memory Error\n");
                return; //종료
            }
            strcpy(tel_list[i]->name, name);

            tel_list[i]->tel_no = (char *)malloc(sizeof(char) * (strlen(tel) + 1));
            if(tel_list[i]->tel_no == NULL){ //메모리 할당 오류 체크
                printf("tel_no Memory Error\n");
                return; //종료
            }
            strcpy(tel_list[i]->tel_no, tel);

            tel_list[i]->birth = (char *)malloc(sizeof(char) * (strlen(birth) + 1));
            if(tel_list[i]->birth == NULL){ //메모리 할당 오류 체크
                printf("birth Memory Error\n");
                return; //종료
            }
            strcpy(tel_list[i]->birth, birth);
        }
        else if(strcmp(tel_list[i]->name, name) > 0){
            for (j = count - 1; j >= i; j--) //사전순서로 저장하기전 뒤로 한칸씩 이동
            {
                tel_list[j + 1] = tel_list[j];
            }

            tel_list[i] = (TEL *)malloc(sizeof(TEL));
            
            tel_list[i]->name = (char *)malloc(sizeof(char) * (strlen(name) + 1));
            if(tel_list[i]->name == NULL){ //메모리 할당 오류 체크
                printf("name Memory Error\n");
                return; //종료
            }
            strcpy(tel_list[i]->name, name);

            tel_list[i]->tel_no = (char *)malloc(sizeof(char) * (strlen(tel) + 1));
            if(tel_list[i]->tel_no == NULL){ //메모리 할당 오류 체크
                printf("tel_no Memory Error\n");
                return; //종료
            }
            strcpy(tel_list[i]->tel_no, tel);

            tel_list[i]->birth = (char *)malloc(sizeof(char) * (strlen(birth) + 1));
            if(tel_list[i]->birth == NULL){ //메모리 할당 오류 체크
                printf("birth Memory Error\n");
                return; //종료
            }
            strcpy(tel_list[i]->birth, birth);
            break;
        }
    }
    count++;
}