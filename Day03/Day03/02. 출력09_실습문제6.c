#include <stdio.h>

int main(void)
{
	char word[100] = "AAAAAA";
	printf("%8.1s\n",word);
	printf("%8.2s\n", word);
	printf("%8.3s\n",word);
	printf("%8.4s\n",word);
	printf("%8.5s\n",word);
	char numword[100] = "111111";
	printf("3.%.1s\n",numword);
	printf("3.%.2s\n", numword);
	printf("3.%.3s\n", numword);
	printf("3.%.4s\n", numword);
	printf("3.%.5s\n", numword);


	char word[100] = "AAAAA";
	double fnum = 3.11111111111111;
	char form1[100] = "%8.1s\n";
	char form2[100] = "%.1f\n";
	for (int i = 0; i < 5; i++) {
		printf(form1, word);
		form1[3]++;
	}
	for (int i = 0; i < 5; i++) {
		printf(form2, fnum);
		form2[2]++;
	}

	//int size = 30;

	//for (int y = 0; y < size; y++)
	//{
	//	for (int x = y; x < 32; x++)
	//	{
	//		printf(" ");
	//	}
	//	for(int x = 0; x <= y; x++)
	//	{
	//		printf("A");
	//	}
	//	
	//	printf("\n");
	//}

	//for (int y = 0; y < size; y++)
	//{
	//	printf("3.");
	//	for(int x = 0; x <= y; x++)
	//	{
	//		printf("1");
	//	}
	//	printf("\n");
	//}




	return 0;
}