#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_struct.h"
#include "my_define.h"
#include "my_func.h"

// 회원 정보를 이름 순(오름차순)으로 정렬한다.
void sort()
{
	if (cnt == 0) {
		printf("회원이 존재하지 않습니다.\n");
		return -1;
	}

	PI* tmp;
	for (int i = 0; i < cnt - 1; i++)
	{
		for (int j = i + 1; j < cnt; j++)
		{
			if (strcmp(list[i]->name, list[j]->name) > 0)
			{
				tmp = list[i];
				list[i] = list[j];
				list[j] = tmp;
			}
		}
	}
	print_all();
}