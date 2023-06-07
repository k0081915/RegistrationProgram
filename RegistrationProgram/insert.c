#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_struct.h"
#include "my_define.h"
#include "my_func.h"

// 회원 정보를 받아서 리스트에 등록한다.
void insert()
{
	int L;
	char tmp[21];

	// 입력한 최대 회원 수를 넘어서 등록하려하면 출력하고 함수 종료
	if (cnt == max_num)
	{
		printf("최대 회원 수를 넘어서 등록할 수 없습니다.\n");
		return -1;
	}

	list[cnt] = (PI*)malloc(sizeof(PI));   //동적할당
	if (list[cnt] == NULL)	// 오류 처리 코드
	{
		printf("error\n");
		return -1;
	}

	// 이름을 입력받고 리스트에 저장한다.
	printf("------------------------------------------------\n");
	printf("이름: ");
	scanf("%s", tmp);
	L = strlen(tmp) + 1;
	list[cnt]->name = (char*)malloc(L * sizeof(char));
	if (list[cnt]->name == NULL)	// 오류 처리 코드
	{
		printf("error\n");
		return -1;
	}
	strcpy(list[cnt]->name, tmp);	//구조체 이름 메모리할당

	// 번호를 입력받고 리스트에 저장한다.
	printf("전화번호: ");
	scanf("%s", tmp);
	L = strlen(tmp) + 1;
	list[cnt]->tel_no = (char*)malloc(L * sizeof(char));
	if (list[cnt]->tel_no == NULL)	// 오류 처리 코드
	{
		printf("error\n");
		return -1;
	}
	strcpy(list[cnt]->tel_no, tmp);   //구조체 번호 메모리할당

	// 생년월일을 입력받고 리스트에 저장한다.
	printf("생년월일: ");
	scanf("%s", tmp);
	L = strlen(tmp) + 1;
	list[cnt]->birth = (char*)malloc(L * sizeof(char));
	if (list[cnt]->birth == NULL)	// 오류 처리 코드
	{
		printf("error\n");
		return -1;
	}
	strcpy(list[cnt]->birth, tmp);   //구조체 생년월일 메모리할당

	// 등급을 입력받고 리스트에 저장한다.
	printf("등급: ");
	scanf("%s", tmp);
	L = strlen(tmp) + 1;
	list[cnt]->rank = (char*)malloc(L * sizeof(char));
	if (list[cnt]->rank == NULL)	// 오류 처리 코드
	{
		printf("error\n");
		return -1;
	}
	strcpy(list[cnt]->rank, tmp);   //구조체 등급 메모리할당

	// 회원 수 업데이트
	cnt++;
	printf("<<현재 등록된 회원 수: %d>>\n", cnt);
}
