#include <stdio.h>

int main(void)
{

	int num1 = 1717;
	int num2 = 19;
	double num3 = num2;
	// 변수 : 자료를 받기 위해 준비한 공간이며, 공간에 저장된 것을 불러오기 위한 이름
	// -> 중복처리가 된다.
	// -> 변수에 저장된 것이 바뀌면 그 이후로 변수가 사용된 곳에 전부 반영된다.
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d / %d = %.2f\n", num1, num2, num1 / (double)num2 );
	printf("%d / %d = %.2f\n", num1, num2, num1 / num3);
	printf("%d / %d = %.2f\n", num1, num2, num1 / (num2*1.0));
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);

	return 0;
}