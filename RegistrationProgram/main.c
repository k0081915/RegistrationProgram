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
	int num;
	FILE* fp;

	printf("�ִ� ȸ�� ��: ");
	scanf("%d", &max_num);
	list = (PI**)malloc(max_num * sizeof(PI*));   //�����Ҵ�
	if (list == NULL)
	{
		printf("error\n");
		return -1;
	}

	while (1)
	{
		printf("====================<MENU>====================\n");
		printf("<1.Registration><2.ShowAll><3.Delete><4.FindByBirth><5.Exit>\n");
		printf("Enter the menu number: ");
		scanf("%d", &num);

		switch (num)
		{
		case 1:
			// ȸ�� ������ �޾Ƽ� ����Ʈ�� ����Ѵ�.
			insert();
			break;
		case 2:
			// ȸ�� ������ ��� ����Ѵ�.
			print_all();
			break;
		case 3:
			// �̸��� �Է¹޾Ƽ� ȸ�� ������ �����Ѵ�.
			delete_member();
			break;
		case 4:
			// ��������� �Է¹޾Ƽ� ȸ�� ������ ã�´�.
			find_by_birth();
			break;
		case 5:
			// ���α׷��� ������ �� ����Ʈ�� ����Ǿ��ִ� ȸ�� ������ ���Ͽ� ����Ѵ�.
			fp = fopen("INFORMATION.txt", "w");
			if (fp == NULL) { // ���� ���⿡ ������ ���
				printf("Couldn't open file"); // ���� ó�� �ڵ�
				return -1;
			}
			for (int i = 0; i < cnt; i++)
			{
				fprintf(fp, "%s %s %s\n", list[i]->name, list[i]->tel_no, list[i]->birth);
			}
			fclose(fp);
			return 0;
		}
	}
}