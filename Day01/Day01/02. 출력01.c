#include <stdio.h>

int main(void)
{	// putchar : ���Ϲ��ڰ�/������ ��� ����
	char ch1 = 'A';
	putchar(ch1);
	putchar('B');
	putchar('B');// �����ʿ� �̾ ���´�.
	putchar(65); // ASCII�ڵ�ǥ�� ������� ������ ���ڷ� �ٲ۴�.
	// putchar("B") ���ڿ��̹Ƿ� �ȵ�
	
	// puts : ���ڿ���/������ ����
	char msg[100] = "����� �����Դϴ�!";
	puts(msg);
	puts("�ٹٲ��� �˾Ƽ� �����ش�!");
	return 0;
}