#include <stdio.h>
int main(void)
{	// 프로그램 : 자료 -> 처리 -> 정보
	int num = 123;
	char ch = 'A';
	double fnum = 3.1456789;
	char word[100] = "Apple";
	printf("문자열출력!\n");
	// printf의 주 목적 : 서식에 맞춰서 보여준다.
	printf("정수 : %d\n문자 : %c\n실수 : %f\n문자열 : %s\n", num, ch, fnum, word);
	// 


	return 0;
}