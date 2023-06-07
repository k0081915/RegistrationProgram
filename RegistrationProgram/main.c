#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_struct.h"
#include "my_define.h"
#include "my_func.h"

cnt = 0;
int main()
{
	int num, num2;
	FILE* fp;
	
	printf("--------------[ȸ�� ��� ���α׷�]--------------\n");
	printf("�ִ�� ����� �� �ִ� ȸ�� ��: ");
	scanf("%d", &max_num);
	list = (PI**)malloc(max_num * sizeof(PI*));   //�����Ҵ�
	if (list == NULL)
	{
		printf("error\n");
		return -1;
	}

	while (1)
	{
		printf("\n================================================\n");
		printf("�Ʒ����� ���ϴ� �׸��� �����ϼ���\n");
		printf("[1. ���] [2. ����] [3. �˻�]\n[4. ����] [5. ���� ����] [6. ����]\n");
		printf("================================================\n");
		printf(">> ");
		scanf("%d", &num);

		switch (num)
		{
		case 1:
			// ȸ�� ������ �޾Ƽ� ����Ʈ�� ����Ѵ�.
			insert();
			break;
		case 2:
			// �̸��� �Է¹޾Ƽ� ȸ�� ������ �����Ѵ�.
			delete_member();
			break;
		case 3:
			// �������� �˻����� ���ϰ� �ش��ϴ� ������ ����Ѵ�.
			printf("------------------------------------------------\n");
			printf("�������� �˻��Ͻðڽ��ϱ�?\n");
			printf("[1. ������Ϸ� �˻�] [2. ������� �˻�]\n");
			printf(">> ");
			scanf("%d", &num2);
			if (num2 == 1) {
				find_by_birth();
			}
			else {
				find_by_rank();
			}
			break;
		case 4:
			// ȸ�� ������ �����ؼ� ��� ����Ѵ�.
			printf("------------------------------------------------\n");
			printf("������ �������� �����Ͻðڽ��ϱ�?\n");
			printf("[1. �̸� ������ ����] [2. ������� ������ ����]\n");
			printf(">> ");
			scanf("%d", &num2);
			if (num2 == 1) {
				sort();
			}
			else {
				sort_by_birth();
			}
			break;
		case 5:
			// �̸����� �˻��Ͽ� ��ȭ��ȣ, �������, ����� �����Ѵ�.
			change();
			break;
		case 6:
			// ���α׷��� ������ �� ����Ʈ�� ����Ǿ��ִ� ȸ�� ������ ���Ͽ� ����Ѵ�.
			fp = fopen("INFORMATION.txt", "w");
			if (fp == NULL) { // ���� ���⿡ ������ ���
				printf("Couldn't open file"); // ���� ó�� �ڵ�
				return -1;
			}
			for (int i = 0; i < cnt; i++)
			{
				fprintf(fp, "%s %s %s %s\n", list[i]->name, list[i]->tel_no, list[i]->birth, list[i]->rank);
			}
			fclose(fp);
			return 0;	
		}
	}
}