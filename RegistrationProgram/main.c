#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_struct.h"
#include "my_define.h"
#include "my_func.h"

cnt = 0;
int main()
{
	int num, num2;
	FILE* fp;
	
	printf("--------------[회원 등록 프로그램]--------------\n");
	printf("최대로 등록할 수 있는 회원 수: ");
	scanf("%d", &max_num);
	list = (PI**)malloc(max_num * sizeof(PI*));   //동적할당
	if (list == NULL)
	{
		printf("error\n");
		return -1;
	}

	while (1)
	{
		printf("\n================================================\n");
		printf("아래에서 원하는 항목을 선택하세요\n");
		printf("[1. 등록] [2. 삭제] [3. 검색]\n[4. 정렬] [5. 정보 수정] [6. 종료]\n");
		printf("================================================\n");
		printf(">> ");
		scanf("%d", &num);

		switch (num)
		{
		case 1:
			// 회원 정보를 받아서 리스트에 등록한다.
			insert();
			break;
		case 2:
			// 이름을 입력받아서 회원 정보를 삭제한다.
			delete_member();
			break;
		case 3:
			// 무엇으로 검색할지 정하고 해당하는 정보를 출력한다.
			printf("------------------------------------------------\n");
			printf("무엇으로 검색하시겠습니까?\n");
			printf("[1. 생년월일로 검색] [2. 등급으로 검색]\n");
			printf(">> ");
			scanf("%d", &num2);
			if (num2 == 1) {
				find_by_birth();
			}
			else {
				find_by_rank();
			}
			break;
		case 4:
			// 회원 정보를 정렬해서 모두 출력한다.
			printf("------------------------------------------------\n");
			printf("무엇을 기준으로 정렬하시겠습니까?\n");
			printf("[1. 이름 순으로 정렬] [2. 생년월일 순으로 정렬]\n");
			printf(">> ");
			scanf("%d", &num2);
			if (num2 == 1) {
				sort();
			}
			else {
				sort_by_birth();
			}
			break;
		case 5:
			// 이름으로 검색하여 전화번호, 생년월일, 등급을 변경한다.
			change();
			break;
		case 6:
			// 프로그램을 종료할 때 리스트에 저장되어있는 회원 정보를 파일에 등록한다.
			fp = fopen("INFORMATION.txt", "w");
			if (fp == NULL) { // 파일 열기에 실패한 경우
				printf("Couldn't open file"); // 오류 처리 코드
				return -1;
			}
			for (int i = 0; i < cnt; i++)
			{
				fprintf(fp, "%s %s %s %s\n", list[i]->name, list[i]->tel_no, list[i]->birth, list[i]->rank);
			}
			fclose(fp);
			return 0;	
		}
	}
}