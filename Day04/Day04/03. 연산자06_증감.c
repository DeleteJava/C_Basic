#include <stdio.h>

int main(void) {
	// ���� : ����ȯ�� ������, ���׿����� ī�װ��� �ִ� ������.
	// ���� : ���Կ���迭�̴�.
	int num = 10;
	printf("num : %d\n", num);
	num = num + 1;
	printf("num : %d\n", num);
	num += 1;
	printf("num : %d\n", num);
	num++; // ��ġ
	printf("num : %d\n", num);
	++num; // ��ġ
	printf("num : %d\n", num);

	// �ٸ� �����ڿ� ���� ���...����/���Ҹ� ��������(��ġ)/���߿�����(��ġ)�� ����
	int result;
	result = 7 + --num; // num -= 1; result = 7 + num;
	printf("%d %d\n", result, num);
	result = 7 + num--; // result = 7 + num; num -= 1;
	printf("%d %d\n", result, num);
	
	// �� �� : ����� ����.
	return 0;
}