#include <stdio.h>

int main(void)
{


	// 컴퓨터는 문자를 이해하지 못한다.
	// -> 정수에 매칭시켜 문자로 바꿔주는 구조

	//printf("<실습문제1.>\n\n");
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


	// c언어에는 문자열 없음. 문자열은 문자의 연속된 집합이다.
	// 이를 구현시켜주는 것이 배열...
	//char phone[100] = "\n010-1234-5678";
	//puts(phone);



	printf("\n\n<실습문제2.>\n\n");

	// 변수를 준비하는 이유 : 자료
	// 값어치가 있는 것을 소중하게 관리하기 위해서...


	char name[100] = "김성수";
	char age[100] = "23";
	char dream[100] = "사무직 생활";
	puts(name);
	puts(age);
	puts(dream);

	printf("이름을 입력하세요 >> ");
	scanf_s("%s", name,sizeof(name));
	printf("%s", name);




	return 0;
}