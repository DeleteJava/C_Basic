#include <stdio.h>

int main(void) {
	// 관계연산자 : 크기비교를 한다. 무조건 1 또는 0이 나온다.
	// - 조건식이라 부른다.
	int num1 = 10;
	int num2 = 5;
	// 경우의 수를 구하기 위한 연산식이다.
	printf("num1 > num2 : %d\n", num1 > num2);
	printf("num1 < num2 : %d\n", num1 < num2);
	printf("num1 >= num2 : %d\n", num1 >= num2);
	printf("num1 <= num2 : %d\n", num1 <= num2);
	printf("num1 == num2 : %d\n", num1 == num2);
	printf("num1 != num2 : %d\n", num1 != num2);
	
	// 주의사항1. 크기비교만 가능하다.
	// -> 문자열은 구조가 특이해서 비교가 안됨
	char word[100] = "ABC";
	printf("result1 : %d\n", "ABC" == word);

	// 주의사항2. 2개이상 연속으로 쓰면 안됨.
	// - C언어의 연산특징
	//  1) 우선순위가 높은 것은 해당 연산자 기준 좌우측을 잡아먹는다.
	//   - 하나의 결과로 바꾼다.
	//  2) 우선순위가 동등하면 왼쪽에서 오른쪽으로 2개씩 잡아먹는다.
	//   - 하나의 결과로 바꾼다.
	int num = 5;
	// 자동처리 / 자동분배 / 자동증명같은 대단한 기능이 없음
	printf("결과1-1 : %d\n", 4 < num < 6);
	printf("결과1-2 : %d\n", 6 > num > 4);
	// 아래처럼 분리한 다음에 합친다.
	printf("결과2-1 : %d, %d\n", 4 < num, num < 6);
	printf("결과2-2 : %d, %d\n", 6 > num, num > 4);
	// 결과자체는 합치면 되는데...결과종류가 너무 많다.
	printf("결과3-1 : %d\n", (4 < num) + (num < 6));
	printf("결과3-2 : %d\n", (6 > num) + (num > 4));
	// -> 결과를 단순화시킬 필요가 생겼다.
	return 0;
}