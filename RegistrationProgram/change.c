#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my_struct.h"
#include "my_define.h"
#include "my_func.h"

void change() {
	char name[21], tel[21], birth[21], rank[21];
	int flag = 0;

	// 회원 수가 0이라면
	if (cnt == 0)
	{
		printf("회원이 존재하지 않습니다.\n");
		return;
	}

	printf("------------------------------------------------\n");
	printf("이름을 입력하고 수정할 전화번호, 생년월일, 등급을 입력해주세요\n");
	printf("이름: ");
	scanf("%s", name);
	// 입력한 이름이 리스트에 존재하지 않으면 존재하지 않다고 출력 후 종료
	for (int i = 0; i < cnt; i++) {
		if (strcmp(list[i]->name, name) == 0) {
			flag = 1;
		}
	}
	// 입력한 이름이 존재하지 않으면 출력
	if (flag == 0) {
		printf("회원이 존재하지 않습니다.\n");
		return -1;
	}

	// 존재하면 수정할 전화번호, 생년월일, 등급 입력
	printf("전화번호: ");
	scanf("%s", tel);
	printf("생년월일: ");
	scanf("%s", birth);
	printf("등급: ");
	scanf("%s", rank);

	for (int i = 0; i < cnt; i++) {
		if (strcmp(list[i]->name, name) == 0) {
			// 변경 전 정보를 출력하고 변경사항을 반영하고 변경된 내용을 보여준다
			printf("[%s %s %s %s] -> ", list[i]->name, list[i]->tel_no, list[i]->birth, list[i]->rank);
			strcpy(list[i]->tel_no, tel);
			strcpy(list[i]->birth, birth);
			strcpy(list[i]->rank, rank);
			printf("[%s %s %s %s]\n", list[i]->name, list[i]->tel_no, list[i]->birth, list[i]->rank);
		}
	}
	
	printf("<수정이 완료되었습니다>\n");
}