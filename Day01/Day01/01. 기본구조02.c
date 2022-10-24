#include <stdio.h>

// 비쥬얼스튜디오 프로그램의 특징
// - 소스파일이 여러개 있으면 이를 하나로 합칠려고 한다.
// - 작성하는 코드는 분할하여 여러개의 소스파일로 만들어 관리한다.
// - 실습목적상/필요시 특정소스파일은 포함이 안되도록 통제해야 한다.

// 방법1. 필요없는건 제외한다. 필요없는 소스파일 우클릭 -> 프로젝트에서 제외
// 방법2. 목록은 유지하되, 제외시킨다.
//        필요없는 소스파일 우클릭 -> 속성 -> <빌드에서 제외> -> <예> -> 확인

int main(void)
{	
	printf("123");
	return 0;
}