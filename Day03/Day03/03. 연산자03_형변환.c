#include <stdio.h>

int main(void)
{	// 형변환 : 자료형을 바꾸는 것	
	
	
	// 형변환연산자 : 불러온 값을 이용할 때, 자료형을 바꿔준다.
	// 사용방식 : (자료형)바꿀값   ※ (int)변수 (double)변수 등등
	int num1 = 10; 
	int num2 = 3;
	// ※ 자료형이 다르지 않으면 무조건 해당 자료형의 값으로만 유지한다.
	// - 자료형이 다를 경우 물리적인 크기가 더 큰 쪽으로 바꾼다.(int < double)
	// - 물리적인 크기가 같으면 더 많은 정보를 저장할 수 있는 쪽으로 바꾼다.(정수 < 실수)
	printf("%d %.2f\n", num1 % num2, num1 / (double)num2);
	// 자동형변환 : 규칙에 따라 자동으로 처리해주는 것
	// num1 / (double)num2 -> (double)num1 / (double)num2
						 // 과거에는 이랬으나 시대를 거치면서 간편화
	// 변수에 값을 저장할 때도 발생하며, 변수에 맞춰서 구겨버리거나, 억지로 늘린다.
	int value1 = 123.9984;
	printf("%d\n", value1); // 소수점 버림처리
	double value2 = 998;
	printf("%.2f\n", value2); // 늘려봤자 없는 것이 생기진 않는다.
	char value3 = value2; // 심하게 차이나면 값이 크게 손실된다.
	printf("%c %d\n", value3, value3);
	
	return 0;
}