#include <stdio.h>

int main(void)
{

	int num1 = 1717;
	int num2 = 19;
	double num3 = num2;
	// ���� : �ڷḦ �ޱ� ���� �غ��� �����̸�, ������ ����� ���� �ҷ����� ���� �̸�
	// -> �ߺ�ó���� �ȴ�.
	// -> ������ ����� ���� �ٲ�� �� ���ķ� ������ ���� ���� ���� �ݿ��ȴ�.
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