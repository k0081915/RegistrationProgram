#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_struct.h"
#include "my_define.h"
#include "my_func.h"

// ȸ�� ������ �̸� ��(��������)���� �����Ѵ�.
void sort()
{
	if (cnt == 0) {
		printf("ȸ���� �������� �ʽ��ϴ�.\n");
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