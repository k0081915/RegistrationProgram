#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_struct.h"
#include "my_define.h"
#include "my_func.h"

// ȸ�� ������ ��� ����Ѵ�.
void print_all()
{
	if (cnt == 0) {
		printf("ȸ���� �������� �ʽ��ϴ�.\n");
		return -1;
	}

	sort();
	for (int i = 0; i < cnt; i++)
	{
		printf("%s %s %s\n", list[i]->name, list[i]->tel_no, list[i]->birth);
	}
}
