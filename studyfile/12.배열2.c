#include <stdio.h>

//2차원 배열 : 배열의 요소가 배열인 형태를 의미합니다.

//ex) int iarray[] = {1,2,3,4,5}; ----->1차원 배열
//ex) int iarray2[][] = { {1,2,3}, {4,5,6}, {7,8,9} }; ----->2차원 배열

//주로 for문을 이용해서 배열을 출력을 하게 되는데 그 값을 기준으로 배열 만드는 방법
//자료형 배열명[세로열][가로열];

int main()
{
	int iArray2[3][4] =
	{
		{1,2,3,4}
		,
		{5,6,7,8}
		,
		{9,10,11,12}
	};

	for (int i = 0; i < 3; i++) //세로열 부분에 대한 반복
	{

		//세로열 작업을 진행하는 동안 반복시킬 가로열에 대한 반복
		for (int j = 0; j < 4; j++)
		{
			printf("2%d ", iArray2[i][j]);
		}
		printf("\n"); //띄어쓰기 진행(열 구분)
	}
	//i가 0일 때, j가 0부터 3까지 반복
	//i가 1일 때, j가 0부터 3까지 반복
	//i가 2일 때, j가 0부터 3까지 반복
	//작업 종료

	int value2[3][3]; //3 x 3형태의 2차원 배열 선언
	int value = 1;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			value2[i][j] = value++;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d", *value2[i][j]);
		}
		printf("\n");
	}

	//연습 문제
	//출력 예시를 참고하여, 이차원 배열 value3을 만드세요.
	//단, 배열 생성과 초기화를 동시에 진행하지 않습니다.

	//1 6 7
	//2 5 8
	//3 4 9

	int value3[3][3]; //3 x 3형태의 2차원 배열 선언
	value = 1;
	
	//작업

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			value3[i][j] = value++;
		}
	}

	//출력

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d", *value3[i][j]);
		}
		printf("\n");
	}




	return 0;
}
