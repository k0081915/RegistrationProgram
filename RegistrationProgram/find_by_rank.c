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
		printf("ȸ���� �������� �ʽ��ϴ�.\n");
		return -1;
	}

	printf("------------------------------------------------\n");
	printf("���: ");
	scanf("%s", rank);

	for (int i = 0; i < cnt; i++)
	{
		if (strcmp(list[i]->rank, rank) == 0)
		{
			// �ش� ��޿� �ش��ϴ� ���� ���
			printf("%s %s %s %s\n", list[i]->name, list[i]->tel_no, list[i]->birth, list[i]->rank);
		}
	}
}