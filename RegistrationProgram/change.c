#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_struct.h"
#include "my_define.h"
#include "my_func.h"

void change() {
	char name[21], tel[21], birth[21];
	int flag = 0;

	// ȸ�� ���� 0�̶��
	if (cnt == 0)
	{
		printf("ȸ���� �������� �ʽ��ϴ�.\n");
		return;
	}

	printf("------------------------------------------------\n");
	printf("�̸��� �Է��ϰ� ������ ��ȭ��ȣ�� ��������� �Է����ּ���\n");
	printf("�̸�: ");
	scanf("%s", name);
	// �Է��� �̸��� ����Ʈ�� �������� ������ �������� �ʴٰ� ��� �� ����
	for (int i = 0; i < cnt; i++) {
		if (strcmp(list[i]->name, name) == 0) {
			flag = 1;
		}
	}
	if (flag == 0) {
		printf("ȸ���� �������� �ʽ��ϴ�.\n");
		return -1;
	}
	// �����ϸ� ������ ��ȭ��ȣ�� ������� �Է�
	printf("��ȭ��ȣ: ");
	scanf("%s", tel);
	printf("�������: ");
	scanf("%s", birth);

	for (int i = 0; i < cnt; i++) {
		if (strcmp(list[i]->name, name) == 0) {
			printf("[%s %s %s] -> ", list[i]->name, list[i]->tel_no, list[i]->birth);
			strcpy(list[i]->tel_no, tel);
			strcpy(list[i]->birth, birth);
			printf("[%s %s %s]\n", list[i]->name, list[i]->tel_no, list[i]->birth);
		}
	}
	
	printf("������ �Ϸ�Ǿ����ϴ�\n");
}