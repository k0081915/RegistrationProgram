#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_struct.h"
#include "my_define.h"
#include "my_func.h"

// ȸ�� ������ �޾Ƽ� ����Ʈ�� ����Ѵ�.
void insert()
{
	int L;
	char tmp[21];

	// �Է��� �ִ� ȸ�� ���� �Ѿ ����Ϸ��ϸ� ����ϰ� �Լ� ����
	if (cnt == max_num)
	{
		printf("�ִ� ȸ�� ���� �Ѿ ����� �� �����ϴ�.\n");
		return -1;
	}

	list[cnt] = (PI*)malloc(sizeof(PI));   //�����Ҵ�
	if (list[cnt] == NULL)	// ���� ó�� �ڵ�
	{
		printf("error\n");
		return -1;
	}

	// �̸��� �Է¹ް� ����Ʈ�� �����Ѵ�.
	printf("------------------------------------------------\n");
	printf("�̸�: ");
	scanf("%s", tmp);
	L = strlen(tmp) + 1;
	list[cnt]->name = (char*)malloc(L * sizeof(char));
	if (list[cnt]->name == NULL)	// ���� ó�� �ڵ�
	{
		printf("error\n");
		return -1;
	}
	strcpy(list[cnt]->name, tmp);	//����ü �̸� �޸��Ҵ�

	// ��ȣ�� �Է¹ް� ����Ʈ�� �����Ѵ�.
	printf("��ȭ��ȣ: ");
	scanf("%s", tmp);
	L = strlen(tmp) + 1;
	list[cnt]->tel_no = (char*)malloc(L * sizeof(char));
	if (list[cnt]->tel_no == NULL)	// ���� ó�� �ڵ�
	{
		printf("error\n");
		return -1;
	}
	strcpy(list[cnt]->tel_no, tmp);   //����ü ��ȣ �޸��Ҵ�

	// ��������� �Է¹ް� ����Ʈ�� �����Ѵ�.
	printf("�������: ");
	scanf("%s", tmp);
	L = strlen(tmp) + 1;
	list[cnt]->birth = (char*)malloc(L * sizeof(char));
	if (list[cnt]->birth == NULL)	// ���� ó�� �ڵ�
	{
		printf("error\n");
		return -1;
	}
	strcpy(list[cnt]->birth, tmp);   //����ü ������� �޸��Ҵ�

	// ����� �Է¹ް� ����Ʈ�� �����Ѵ�.
	printf("���: ");
	scanf("%s", tmp);
	L = strlen(tmp) + 1;
	list[cnt]->rank = (char*)malloc(L * sizeof(char));
	if (list[cnt]->rank == NULL)	// ���� ó�� �ڵ�
	{
		printf("error\n");
		return -1;
	}
	strcpy(list[cnt]->rank, tmp);   //����ü ��� �޸��Ҵ�

	// ȸ�� �� ������Ʈ
	cnt++;
	printf("<<���� ��ϵ� ȸ�� ��: %d>>\n", cnt);
}
