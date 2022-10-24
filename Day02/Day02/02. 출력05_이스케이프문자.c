#include <stdio.h>

int main(void)
{
	// 이스케이프 문자 : 특수문자인데 특수한 기능을 할 수 있음
	// \n : 줄바꿈 문자. 키보드의 엔터와 동등한 값.
	printf("\t줄바꿈을\n\t원하는\n\t곳에\n\t마음대로\n\t추가하면\n\t된다!\n");
	// c언어에서는 줄바꿈때문에 반드시 써야 하는 문자이다.
	char newLine = '\n'; // 문자값으로 취급 가능하다 == 두개가 한쌍이다.
	printf("줄바꿈이%c됩니다.%c", newLine, newLine);

	// \", \' , \\ : 원래 기능이 아닌, 문자로써 쓰기 위한 규칙
	printf("\'이것\'을 \"강조\" 하고 싶다.\n"); // 문자열 내에선 작은따옴표 그냥 가능
	printf("%c강조!%c\n", '\'', '\'');
	// printf("\"); 단독으로 역슬래쉬 출력시 처리되지 않음
	// printf("\가"); 등록되지 않은 시퀀스라고 출력불가가 나옴
	printf("\\가\\\n");

	// \t : 정렬용도의 문자
	printf("이름\t: ABC\n");
	printf("나이\t: 35\n");





	return 0;


}