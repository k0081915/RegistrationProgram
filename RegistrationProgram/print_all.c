#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_struct.h"
#include "my_define.h"
#include "my_func.h"

// 회원 정보를 모두 출력한다.
void print_all()
{
	if (cnt == 0) {
		printf("회원이 존재하지 않습니다.\n");
		return -1;
	}

	sort();
	for (int i = 0; i < cnt; i++)
	{
		printf("%s %s %s\n", list[i]->name, list[i]->tel_no, list[i]->birth);
	}
}
