#include <stdio.h>

int main(void) {
	// 입력방식 : 키보드로 원하는 것을 입력하고 엔터

	// getchar() : 단일문자만 입력받는다.

	// C언어 코드의 작성요령 : 컴파일언어다.
	// 1) 빠른 처리를 위해 변수는 먼저 선언한다.
	// 2) 선언과 초기화는 동시에 반드시 할 필요없음.
	char ch;

	printf("문자를 입력하세요 >> ");
	ch = getchar();

	printf("입력한 문자 : %c\n", ch);
	return 0;
}