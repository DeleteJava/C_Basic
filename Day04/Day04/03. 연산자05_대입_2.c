#include <stdio.h>

int main(void) {
	// 대입 : 변수에 값을 저장 / 저장된 값을 교체
	// 좌측에는 변수가 될 수 있는 것이 와야 한다.
	//  - 저장공간(Left Value) - 변수만 가능
	// 우측에는 값이 될 수 있는 것이면 뭐든 된다.
	//  - 값(Right Value) - 변수/상수
	
	// char word[100];
	// word = "abc"; 변수처럼 보여도 변수가 아닐 수 있다.
	int num = 10;
	printf("num : %d\n", num);
	num = num + 5;
	printf("num : %d\n", num);
	
	// 복합대입 : 위 연산을 줄인 것
	num += 5;
	printf("num : %d\n", num);
	// 주의사항1. num = 5 + num에 대한 것은 아니다.
	// 주의사항2. 변수 초기화용도로 사용불가.
	int num1; // 선언만 하면 내부에는 쓰레기값이 들어있다.
	printf("num1 : %d\n", num1);
	// 쓰레값은 절대로 값으로써 준비하거나, 비교하거나, 사용해서 안됨.
	return 0;
}