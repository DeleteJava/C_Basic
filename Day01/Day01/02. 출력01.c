#include <stdio.h>

int main(void)
{	// putchar : 단일문자값/변수만 출력 가능
	char ch1 = 'A';
	putchar(ch1);
	putchar('B');
	putchar('B');// 오른쪽에 이어서 나온다.
	putchar(65); // ASCII코드표를 기반으로 정수를 문자로 바꾼다.
	// putchar("B") 문자열이므로 안됨
	
	// puts : 문자열값/변수만 가능
	char msg[100] = "저장된 문장입니다!";
	puts(msg);
	puts("줄바꿈을 알아서 붙혀준다!");
	return 0;
}