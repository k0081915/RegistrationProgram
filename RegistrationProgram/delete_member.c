#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_struct.h"
#include "my_define.h"
#include "my_func.h"

// �̸��� �Է¹޾Ƽ� ȸ�� ������ �����Ѵ�.
void delete_member()
{
	char name[21];
	int flag = 0;
	PI* tmp;

	// ȸ�� ���� 0�̶��
	if (cnt == 0)
	{
		printf("ȸ���� �������� �ʽ��ϴ�.\n");
		return;
	}

	printf("------------------------------------------------\n");
	printf("�̸�: ");
	scanf("%s", name);
	for (int i = 0; i < cnt; i++)
	{
		if (strcmp(list[i]->name, name) == 0)   // �̸� ������ ����
		{
			flag = 1;	// ���� �Ǿ����� flag 1
			tmp = list[i];	// ���� ���� ����
			for (int j = i; j < cnt - 1; j++)
			{
				list[j] = list[j + 1];   // ������ �����
			}
			list[cnt - 1] = tmp;	// ����Ʈ�� �������� �ٿ��ְ� free() ����
			cnt--;
			free(list[cnt]->name);
			free(list[cnt]->tel_no);
			free(list[cnt]->birth);
			free(list[cnt]);
			break;
		}
	}

	if (flag == 0) {
		printf("ȸ���� �������� �ʽ��ϴ�.\n");
	}
}
