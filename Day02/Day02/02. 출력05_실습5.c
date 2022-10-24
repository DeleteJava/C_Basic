#include <stdio.h>

int main(void)
{	

	// printf : 막 쓴다.
	// 1) 한줄당 printf 한번씩 쓴다.
	// 2) 너무 길다 -> 쪼갠다.
	// 3) 너무 짧다 -> 합친다.
	// 확대수준에 따라 다르지만, 편집화면 절반을 넘는가? 넘지 않는가?

	printf("The 'QUICK' brown fox\n\n"
	"jump over\n\n\"The\" Lazy Dog!\n\n"
	"\\n 은 줄바꿈, \\t 는 탭문자\n\n"
	"\\' 는 작은 따옴표\n\n\\\" 는 큰 따옴표\n");
	// 이스케이프 문자 쓰는게 종종 어려우면
	// 문법 점검 기능을 이용해보자



	return 0;
}