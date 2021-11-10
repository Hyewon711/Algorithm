//비트 연산을 통해 문자의 대소문자 바꾸기

#include <stdio.h>

int main(void) {

	char s[100];
	int i;
	printf("문자열을 입력하시오: ");
	scanf("%s", s);
	for (i=0;i<strlen(s);i++) {
		s[i] = s[i] ^ 0x20;
	}

	printf("결과 문자열: %s\n", s);
	return 0;

}