#include <stdio.h>

int main(void) {
	// 용도 : 전기신호를 제어 / 변수쪼개기
	// 효과 : 빠른 반응속도 / 변수를 아낄 수 있음

	// 변수쪼개기 : 컴퓨터에 저장된 값의 원형을 건드린다.
	// 사람이 쓰는 컴퓨터의 용량기준 : Byte
	// 콤퓨터가 쓰는 용량 기준 : Bit
	// 8 Bit = 1 Byte
	// Bit는 0과 1만 표현하고, 이를 참과 거짓이며, 이를 이용한다.
	char values = 0; // 0000 0000
	values = 1;   // 0000 0001
	printf("좌로 2칸 이동 : %d\n", values << 2); // 0000 0100
	printf("우로 1칸 이동 : %d\n", values >> 1); // 우측은 없으니 사라짐
	// 논리판단용 ( &, |, ^ )
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
	// 0000 0001 보수라는 규칙으로 표현되기도 한다.
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