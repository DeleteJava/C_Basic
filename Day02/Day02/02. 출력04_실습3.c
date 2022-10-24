#include <stdio.h>

int main(void)
{
	printf("010-1234-5678\n");


	// 주의사항 : 변수에 상수를 저장할 수 있다.
	//            저장된 이후부터는 변수에 복사된 값을 이용하는 것
	// - 변수에 값을 넣기 위해 상수를 저장시키고, 이를
	// 준비한 변수에 복사하는 과정이다.
	char name[100] = "김성수";
	int age = 23;
	char dream[100] = "적당히 살기";
	printf("%s %d %s\n", name, age, dream);


	return 0;
}