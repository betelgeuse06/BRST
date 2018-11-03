#include <stdio.h>
#include <string.h>

int basic() {
	printf("%s\n", "BRST_0.0.3v");
	printf("%s\n", "Hello~? here BRST is It is based on the C language");
	printf("%s\n", "Are you ready? start!");
	printf("%s\n", "도움말: Help()");
}

int main(int argc, char const *argv[]) {
	int loop_NUM = 0;
	int i = 0;
	int plus[100000];
	int add;
	int while_NUM;
	basic();
	while (1) {
		char code1[100];
		char print[100] = "print";
		char help[100] = "help()";
		char input[100] = "input";
		char loop[100] = "loop";
		char add[100] = "add";
		char minus[100] = "minus";
		char by[100] = "by";
		char division[100] = "division";
		scanf("%s", code1);
		if (!strcmp(code1, print)) {
			scanf("%s", code1);
			printf("%s\n\n", code1);
		} else if (!strcmp(code1, help)) {
			printf("%s\n%s\n%s\n\n", "BRST ver: 0.0.3", "출력하기: print입력하고 Enter키 누르기 그런 다음에 출력하고 싶은 것 입력하고 Entry 누르기(space 바는 X)", "LOOP하기:  loop -> Enter키 -> 반복회수입력 -> Enter키 -> 명령어 입력 -> 반복됨");
		} else if (!strcmp(code1, loop)) {
			scanf("%d", &loop_NUM);
			scanf("%s", code1);
			if (!strcmp(code1, print)) {
				scanf("%s", code1);
				for (i = 0; i < loop_NUM; i++) {
					printf("%s", code1);
				}
			}
		} else if (!strcmp(code1, add)) {
				i = 0;
				scanf("%d", while_NUM);
				while (i < while_NUM) {
					scanf("%d", plus[i]);
					i++;
				}
				i = 0;
				while (i < while_NUM)
				{
					add += plus[i];
					i++;
				}
				printf("%d\n\n", add);
		} else {
			printf("문법 오류");
		}
	}
	return 0;
}
