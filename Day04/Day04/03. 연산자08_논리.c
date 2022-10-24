#include <stdio.h>

int main(void) {
	// 방식자체는 덧셈과 곱셈기반, 결과는 1 또는 0으로 나온다.
	
	int num = 5;
	// 논리곱 : 조건식들을 만족하는 유일한 하나를 원할 때
	printf("result1 : %d\n", 5 < num && num < 10);
	// 논리합 : 조건식들을 적어도 하나이상 만족하는 여러개를 원할 때
	printf("result2 : %d\n", num > 5 || num == 5); // num >= 5
	// 부정 : 단항연산자라서, 우선순위가 엄청 높으니 주의.
	// -> 결과를 반전시킬 때 사용한다.
	printf("result3 : %d, %d\n", !(num > 5), !(num<=5));
	// -> num<=5, num>5
	return 0;
}