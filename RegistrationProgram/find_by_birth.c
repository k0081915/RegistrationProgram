#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_struct.h"
#include "my_define.h"
#include "my_func.h"

// ��������� �Է¹޾Ƽ� ȸ�� ������ ã�´�.
void find_by_birth()
{
	int m, n;

	if (cnt == 0) {
		printf("ȸ���� �������� �ʽ��ϴ�.\n");
		return -1;
	}

	printf("�������: ");
	scanf("%d", &m);

	for (int i = 0; i < cnt; i++)
	{
		n = atoi(list[i]->birth);	// ������ �ٲ�
		if (m == n)
		{
			printf("%s %s %s\n", list[i]->name, list[i]->tel_no, list[i]->birth);
		}
	}
}
