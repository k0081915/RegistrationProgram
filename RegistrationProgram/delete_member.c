#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_struct.h"
#include "my_define.h"
#include "my_func.h"

// 이름을 입력받아서 회원 정보를 삭제한다.
void delete_member()
{
	char name[21];
	int flag = 0;
	PI* tmp;

	// 회원 수가 0이라면
	if (cnt == 0)
	{
		printf("회원이 존재하지 않습니다.\n");
		return;
	}

	printf("------------------------------------------------\n");
	printf("이름: ");
	scanf("%s", name);
	for (int i = 0; i < cnt; i++)
	{
		if (strcmp(list[i]->name, name) == 0)   // 이름 같으면 삭제
		{
			flag = 1;	// 삭제 되었으면 flag 1
			tmp = list[i];	// 현재 정보 저장
			for (int j = i; j < cnt - 1; j++)
			{
				list[j] = list[j + 1];   // 다음거 덮어쓰기
			}
			list[cnt - 1] = tmp;	// 리스트의 마지막에 붙여넣고 free() 해줌
			cnt--;
			free(list[cnt]->name);
			free(list[cnt]->tel_no);
			free(list[cnt]->birth);
			free(list[cnt]);
			break;
		}
	}

	if (flag == 0) {
		printf("회원이 존재하지 않습니다.\n");
	}
}
