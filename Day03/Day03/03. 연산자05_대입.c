#include <stdio.h>

int main(void)
{	// 대입 : 저장. 변수에 값을 저장한다.
	// 단, 다른 연산식이나 괄호내에서 섞어쓰지 말 것. 알아보기 힘들어짐.
	// - 대입연산자 왼쪽에는 무조건 저장공간이 와야 한다. 다른건 불가능

	// 이렇게 사용하지 마세요. ↓↓
	/*
	int num1 = 10;
	printf("num1 : %d\n", num1 = 25);
	int result = ((num1 = 33) + 5) * 2;
	printf("result : %d\n", result);
*/ // <	↑↑ 보지도 말 것>

	int num1 = 33;
	// - 단독으로 쓰는게 제일 좋지만, 일단 연산자이기 때문에 우선순위가 존재한다.
	// 밑바닥 바로 위에 있음
	num1 = num1 + 7; // 값을 먼저 불러와서 연산 (컴퓨터 과학에서는 <평가한다> 라고 한다.)
	printf("num1 : %d\n", num1); // 7만큼 증가된 결과물이 된다.





	return 0;
}