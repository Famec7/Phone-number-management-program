# Phone Number Management Program / 연락처 관리 프로그램

**![gcc badge](https://img.shields.io/badge/gcc-6.3.0-brightgreen) ![OS badge](https://img.shields.io/badge/OS-windows-blue) ![IDE badge](https://img.shields.io/badge/IDE-vscode-blue) ![issue badge](https://img.shields.io/github/issues/LimDongGeon/Phone-number-management-program) ![forks badge](https://img.shields.io/github/forks/LimDongGeon/Phone-number-management-program)	![stars badge](https://img.shields.io/github/stars/LimDongGeon/Phone-number-management-program) ![license badge](https://img.shields.io/github/license/LimDongGeon/Phone-number-management-program)**  

## Getting Started / 어떻게 시작하나요?

Put the header directory, src directory and CmakeLists.txt in the same directory and build  

### Prerequisites / 선행 조건

install vscode and Cmake  
MinGW-W64 GCC-8.1.0  
OS - Windows

### Installing / 설치

```
no module
```

## Running the tests / 테스트의 실행

### my_func.h

```
함수 원형선언과 구조체 선언 및 typedef 선언을 한 헤더파일이 담겨 있습니다.
```

### main.c

```C
extern TEL **tel_list; //이중 구조체 포인터로 메모리를 저장합니다.(즉, tel_list[0][0], tel_list[1][0] ... 방식으로 메모리 저장)

FILE *fp = fopen("PHONE_BOOK.txt", "w"); // 연락처 정보를 담는 데이터베이스를 메모장 파일로 사용합니다.  
```

### sort.c

```C
//이름 순으로 정렬하되 삽입정렬을 이용합니다.
```

### insert.c

```C
tel_list[count] = (TEL *)malloc(sizeof(TEL));
if(tel_list[count] == NULL){ //메모리 할당 오류 체크
  printf("tel_list[count] Memory Error\n");
  return; //종료
} //연락처를 저장하기 위한 메모리를 동적할당합니다.
```

### delete.c

```C
free(tel_list[i]->name);
free(tel_list[i]->tel_no);
free(tel_list[i]->birth);
free(tel_list[i]); //연락처를 삭제하기 위해 메모리를 해제합니다.(해제 안할 시 memory leak 발생)
```

## Deployment / 배포

Add additional notes about how to deploy this on a live system / 라이브 시스템을 배포하는 방법

## Built With / 누구랑 만들었나요?

* alone

## Contributiong / 기여

## License / 라이센스

## Acknowledgments / 감사의 말

* exe 파일과 txt파일은 모두 src와 header 디렉터리가 있는 곳에 생성됩니다.(src와 header디렉터리를 같은 디렉터리에 두세요)
* University Project

## Impression / 느낀 점

* 동적할당의 개념에 대해 정확히 알 수 있었습니다. (예를 들어, 포인터가 힙영역을 가르키는 것이고, 메모리를 해제한다고 해도 포인터가 없어지는 것이 아닌 힙영역의 메모리가 없어진다.)
* visual studio가 아닌 vscode에서 작업을 하다보니 빌드 과정에서 자연스럽게 Makefile과 Cmake를 배웠고, 그 과정 속에서 gcc로 컴파일과 링킹을 하는 법을 배웠습니다.(gcc를 접한 후 makefile를 접하다가 Cmake의 존재를 알게 됨)
* 분리 컴파일을 배우다보니 변수의 생명주기에 대해 자세히 알 수 있었습니다.
