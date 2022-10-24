#include <stdio.h>

int main(void) {
	// �뵵 : �����ȣ�� ���� / �����ɰ���
	// ȿ�� : ���� �����ӵ� / ������ �Ƴ� �� ����

	// �����ɰ��� : ��ǻ�Ϳ� ����� ���� ������ �ǵ帰��.
	// ����� ���� ��ǻ���� �뷮���� : Byte
	// ��ǻ�Ͱ� ���� �뷮 ���� : Bit
	// 8 Bit = 1 Byte
	// Bit�� 0�� 1�� ǥ���ϰ�, �̸� ���� �����̸�, �̸� �̿��Ѵ�.
	char values = 0; // 0000 0000
	values = 1;   // 0000 0001
	printf("�·� 2ĭ �̵� : %d\n", values << 2); // 0000 0100
	printf("��� 1ĭ �̵� : %d\n", values >> 1); // ������ ������ �����
	// ���Ǵܿ� ( &, |, ^ )
	char values1 = 3;			  
	printf("values & values1 : %d\n", values & values1);
	// 0000 0011
	// 0000 0001
	// 0000 0001
	printf("values | values1 : %d\n", values | values1);
	// 0000 0011
	// 0000 0001
	// 0000 0011
	printf("values ^ values1 : %d\n", values ^ values1);
	// 0000 0011
	// 0000 0001
	// 0000 0010
	printf("~values : %d\n", ~values);
	// 0000 0001 ������� ��Ģ���� ǥ���Ǳ⵵ �Ѵ�.
	// 1111 1110
	
	values = 2;   // 0000 0010
	values = 4;   // 0000 0100
	values = 8;   // 0000 1000
	values = 16;  // 0001 0000
	values = 32;  // 0010 0000
	values = 64;  // 0100 0000
	values = 128; // 1000 0000
	return 0;
}