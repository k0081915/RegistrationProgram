#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_struct.h"
#include "my_define.h"
#include "my_func.h"

// ���Ͽ� ����Ǿ��ִ� ȸ�������� �ҷ��´�.
void regist_from_file()
{
	int L = 0;
	char name[21], tel[21], birth[21];
	FILE* fp = fopen("INFORMATION.txt", "r");

	// ������ ��������� �Ʒ� ���� ����ϰ� ����
	if (fp == NULL)
	{
		printf("��ϵ� ������ �����ϴ�.\n");
		return -1;
	}

	while (1)
	{
		// ���� ��ġ�� ����Ʈ�� �ʱ�ȭ
		// ���� ������ �� �پ� �����鼭 ����Ʈ�� ����
		list[cnt] = (PI*)malloc(sizeof(PI));
		fscanf(fp, "%s %s %s", name, tel, birth);

		L = strlen(name) + 1;
		list[cnt]->name = (char*)malloc(L * sizeof(char));
		strcpy(list[cnt]->name, name);

		L = strlen(tel) + 1;
		list[cnt]->tel_no = (char*)malloc(L * sizeof(char));
		strcpy(list[cnt]->tel_no, tel);

		L = strlen(birth) + 1;
		list[cnt]->birth = (char*)malloc(L * sizeof(char));
		strcpy(list[cnt]->birth, birth);

		//���� ���� ���̸� break
		if (feof(fp))
			break;
		cnt++;
	}
	fclose(fp);

	// �ٽ� ����
	sort();
}