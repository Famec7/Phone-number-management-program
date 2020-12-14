#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_struct.h"
#include "my_define.h"
#ifndef MY_FUNC_H
#define MY_FUNC_H
void sort(char name[], char tel[], char birth[]); //이름 순으로 정렬하는 함수
void insert(); //연락처 등록 함수
void print_all(); //연락처 출력 함수
void delete_tel(); //연락처 삭제 함수
void find_by_birth(); //같은 달 생일 찾는 함수
void RegFromFile(); //파일로부터 정보를 받는 함수
void RegToFile(FILE *fp); //등록된 정보를 파일에 등록하는 함수
#endif