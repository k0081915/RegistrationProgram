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
	int num;
	FILE* fp;

	printf("최대 회원 수: ");
	scanf("%d", &max_num);
	list = (PI**)malloc(max_num * sizeof(PI*));   //동적할당
	if (list == NULL)
	{
		printf("error\n");
		return -1;
	}

	while (1)
	{
		printf("====================<MENU>====================\n");
		printf("<1.Registration><2.ShowAll><3.Delete><4.FindByBirth><5.Exit>\n");
		printf("Enter the menu number: ");
		scanf("%d", &num);

		switch (num)
		{
		case 1:
			// 회원 정보를 받아서 리스트에 등록한다.
			insert();
			break;
		case 2:
			// 회원 정보를 모두 출력한다.
			print_all();
			break;
		case 3:
			// 이름을 입력받아서 회원 정보를 삭제한다.
			delete_member();
			break;
		case 4:
			// 생년월일을 입력받아서 회원 정보를 찾는다.
			find_by_birth();
			break;
		case 5:
			// 프로그램을 종료할 때 리스트에 저장되어있는 회원 정보를 파일에 등록한다.
			fp = fopen("INFORMATION.txt", "w");
			if (fp == NULL) { // 파일 열기에 실패한 경우
				printf("Couldn't open file"); // 오류 처리 코드
				return -1;
			}
			for (int i = 0; i < cnt; i++)
			{
				fprintf(fp, "%s %s %s\n", list[i]->name, list[i]->tel_no, list[i]->birth);
			}
			fclose(fp);
			return 0;
		}
	}
}