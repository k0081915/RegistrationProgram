#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_struct.h"
#include "my_define.h"
#include "my_func.h"

void find_by_rank() {
	char rank[21];

	if (cnt == 0) {
		printf("회원이 존재하지 않습니다.\n");
		return -1;
	}

	printf("------------------------------------------------\n");
	printf("등급: ");
	scanf("%s", rank);

	for (int i = 0; i < cnt; i++)
	{
		if (strcmp(list[i]->rank, rank) == 0)
		{
			// 해당 등급에 해당하는 정보 출력
			printf("%s %s %s %s\n", list[i]->name, list[i]->tel_no, list[i]->birth, list[i]->rank);
		}
	}
}