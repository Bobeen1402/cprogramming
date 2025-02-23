#include <stdio.h> //입출력 제공
#include <stdarg.h> //가변 인자 제공
#include <math.h> //수학 기능 제공

void Quadformula(a, b, c)
{
	float result;
	result = 2 * a - b + -b - 4 * a * c;
	printf("%d\n", result);
}

void PrinkRank(rank)
{
	if (rank = 1)
	{
		printf("1st\n");
	}
	else if (rank = 2)
	{
		printf("2nd\n");

	}
	else if (rank = 3)
	{
		printf("3rd\n");

	}
	else if (rank = 4)
	{
		printf("4th\n");

	}
	else
	{
		printf("%dst\n", rank);
	}
}

void average(int score, ...)
{
	va_list args;
	//전달받은 값을 묶음으로 저장합니다.
	va_start(args, score);
	//목록으로부터, score까지의 작업을 수행합니다.

	for (int i = 0; i < score; i++)
	{
		printf("%d ", va_arg(args, score));
		//va_arg(묶음 이름, 자료형)를 통해
		//묶음에 있는 자료형 데이터의 값을 받아옵니다.
	}
	printf("\n");
	va_end(args); //작업 완료
}

int main()
{
	//x² - 2x = 2를 풀이하시오.
	double a = 1;
	double b = -2;
	double c = -2;
	printf("x² - 2x = 2를 풀이하시오.\n");
	Quadformula(a, b, c);
	//힌트 : 2차 방정식을 풀기 위해선 근의 공식을 이용해봅니다.

	//2. 다음 조건을 만족하는 printRank를 구현하세요.
	int rank = 0;
	printf("다음 조건을 만족하는 printRank를 구현하세요.\n");
	scanf_s("등수를 입력하세요.", &rank);
	PrintRank(rank);

	//3. 다음 조건을 만족하는 average를 구현하세요.
	printf("다음 조건을 만족하는 average를 구현하세요.");
	float result1 = average(3, 100, 95, 90); //95.00
	float result2 = average(4, 100, 95, 90, 80); //91.25
	//힌트) printf("%.2f, value);를 활용하면 소수점 2자리까지 출력 가능

	//4. 다음 조건을 만족하는 isOdd를 구현하세요.
	isOdd(3); //"YES"
	isOdd(4); //"NO"
	isOdd(5); //"YES"

	//5. 다음 조건을 만족하는 getPrime을 구현하세요.

	for (int i = 1; i <= 10; i++)
	{
		if (getPrime(i) == 1)
		{
			printf("이 값은 소수입니다.\n");
		}

		else
		{
			printf("이 값은 소수가 아닙니다.\n")
		}
	}

	return 0;
}