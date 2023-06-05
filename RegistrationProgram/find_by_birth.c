#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_struct.h"
#include "my_define.h"
#include "my_func.h"

// 생년월일을 입력받아서 회원 정보를 찾는다.
void find_by_birth()
{
	int m, n;

	if (cnt == 0) {
		printf("회원이 존재하지 않습니다.\n");
		return -1;
	}

	printf("생년월일: ");
	scanf("%d", &m);

	for (int i = 0; i < cnt; i++)
	{
		n = atoi(list[i]->birth);	// 정수로 바꿈
		if (m == n)
		{
			printf("%s %s %s\n", list[i]->name, list[i]->tel_no, list[i]->birth);
		}
	}
}
