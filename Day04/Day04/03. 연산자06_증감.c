#include <stdio.h>

int main(void) {
	// 증감 : 형변환과 동일한, 단항연산자 카테고리에 있는 연산자.
	// 주의 : 대입연산계열이다.
	int num = 10;
	printf("num : %d\n", num);
	num = num + 1;
	printf("num : %d\n", num);
	num += 1;
	printf("num : %d\n", num);
	num++; // 후치
	printf("num : %d\n", num);
	++num; // 전치
	printf("num : %d\n", num);

	// 다른 연산자와 섞을 경우...증가/감소를 먼저할지(전치)/나중에할지(후치)를 결정
	int result;
	result = 7 + --num; // num -= 1; result = 7 + num;
	printf("%d %d\n", result, num);
	result = 7 + num--; // result = 7 + num; num -= 1;
	printf("%d %d\n", result, num);
	
	// 그 외 : 상수에 못씀.
	return 0;
}