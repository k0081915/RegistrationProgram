#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_struct.h"
#include "my_define.h"
#include "my_func.h"

// 파일에 저장되어있는 회원정보를 불러온다.
void regist_from_file()
{
	int L = 0;
	char name[21], tel[21], birth[21];
	FILE* fp = fopen("INFORMATION.txt", "r");

	// 파일이 비어있으면 아래 문구 출력하고 종료
	if (fp == NULL)
	{
		printf("등록된 정보가 없습니다.\n");
		return -1;
	}

	while (1)
	{
		// 현재 위치의 리스트를 초기화
		// 파일 내용을 한 줄씩 읽으면서 리스트에 저장
		list[cnt] = (PI*)malloc(sizeof(PI));
		fscanf(fp, "%s %s %s", name, tel, birth);

		L = strlen(name) + 1;
		list[cnt]->name = (char*)malloc(L * sizeof(char));
		strcpy(list[cnt]->name, name);

		L = strlen(tel) + 1;
		list[cnt]->tel_no = (char*)malloc(L * sizeof(char));
		strcpy(list[cnt]->tel_no, tel);

		L = strlen(birth) + 1;
		list[cnt]->birth = (char*)malloc(L * sizeof(char));
		strcpy(list[cnt]->birth, birth);

		//파일 내용 끝이면 break
		if (feof(fp))
			break;
		cnt++;
	}
	fclose(fp);

	// 다시 정렬
	sort();
}