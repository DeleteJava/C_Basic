#include <stdio.h>

int main(void) {
	// 1. 조건연산자 : 연산대상이 3개 있어야 하는 삼항연산자
	// -> 값을 조건식의 연산결과에 따라 고르고 싶을 때
	// -> 상위호환이 존재해서 잘 안씀.
	int num1 = 10;
	int num2 = 15;
	int result = (num1 > num2) ? 100 : -100 ;
	printf("result : %d\n", result);

	// 2. 기타1. sizeof( )
	// - 저장공간/자료형의 크기를 정수값으로 구해주는 연산자
	printf("double : %d Bytes\n", sizeof(double));
	printf("result : %d Bytes\n", sizeof(result));

	// 3. 기타2. 콤마( , ) - 가장 오른쪽이 결과인 연산자
	// - 코드를 연속으로 실행시키기 위한 연산자
	printf("1\n"), printf("2\n");
	int num3 = 15;
	int result2 = (num3 += 5, num3++, num3 + 3);
	printf("%d %d\n", result2, num3);
	return 0;
}