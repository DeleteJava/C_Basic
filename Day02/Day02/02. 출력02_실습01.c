#include <stdio.h>

int main(void)
{


	// ��ǻ�ʹ� ���ڸ� �������� ���Ѵ�.
	// -> ������ ��Ī���� ���ڷ� �ٲ��ִ� ����

	//printf("<�ǽ�����1.>\n\n");
	//putchar('0');
	//putchar('1');
	//putchar('0');
	//putchar('-');
	//putchar('1');
	//putchar('2');
	//putchar('3');
	//putchar('4');
	//putchar('-');
	//putchar('5');
	//putchar('6');
	//putchar('7');
	//putchar('8');


	// c���� ���ڿ� ����. ���ڿ��� ������ ���ӵ� �����̴�.
	// �̸� ���������ִ� ���� �迭...
	//char phone[100] = "\n010-1234-5678";
	//puts(phone);



	printf("\n\n<�ǽ�����2.>\n\n");

	// ������ �غ��ϴ� ���� : �ڷ�
	// ����ġ�� �ִ� ���� �����ϰ� �����ϱ� ���ؼ�...


	char name[100] = "�輺��";
	char age[100] = "23";
	char dream[100] = "�繫�� ��Ȱ";
	puts(name);
	puts(age);
	puts(dream);

	printf("�̸��� �Է��ϼ��� >> ");
	scanf_s("%s", name,sizeof(name));
	printf("%s", name);




	return 0;
}