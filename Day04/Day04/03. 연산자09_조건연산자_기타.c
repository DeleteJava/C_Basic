#include <stdio.h>

int main(void) {
	// 1. ���ǿ����� : �������� 3�� �־�� �ϴ� ���׿�����
	// -> ���� ���ǽ��� �������� ���� ���� ���� ��
	// -> ����ȣȯ�� �����ؼ� �� �Ⱦ�.
	int num1 = 10;
	int num2 = 15;
	int result = (num1 > num2) ? 100 : -100 ;
	printf("result : %d\n", result);

	// 2. ��Ÿ1. sizeof( )
	// - �������/�ڷ����� ũ�⸦ ���������� �����ִ� ������
	printf("double : %d Bytes\n", sizeof(double));
	printf("result : %d Bytes\n", sizeof(result));

	// 3. ��Ÿ2. �޸�( , ) - ���� �������� ����� ������
	// - �ڵ带 �������� �����Ű�� ���� ������
	printf("1\n"), printf("2\n");
	int num3 = 15;
	int result2 = (num3 += 5, num3++, num3 + 3);
	printf("%d %d\n", result2, num3);
	return 0;
}