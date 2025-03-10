#include <stdio.h> //입출력 제공
#include <stdarg.h> //가변 인자 제공
#include <math.h> //수학 기능 제공

int Quadformula(a, b, c)
{
	float result1;
	float result2;
	result1 = - b + sqrt(b*b - 4.0 * a * c) / 2.0 * a;
	result2 = - b - sqrt(b*b - 4.0 * a * c) / 2.0 * a;
	printf("답은 %.2f와 %.2f\n", result1, result2);
}

int PrintRank(rank)
{
	if (rank == 1)
	{
		printf("1st\n");
	}
	else if (rank == 2)
	{
		printf("2nd\n");

	}
	else if (rank == 3)
	{
		printf("3rd\n");

	}
	else if (rank == 4)
	{
		printf("4th\n");

	}
	else
	{
		printf("%dst\n", rank);
	}
}


float average(int score, ...)
{
	va_list args;
	//전달받은 값을 묶음으로 저장합니다.
	va_start(args, score);
	//목록으로부터, score까지의 작업을 수행합니다.

	float sum = 0;
	for (int i = 0; i < score; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args); //작업 완료

	return (float)sum / score;

}

int isOdd(number)

{
	if (number % 2 == 1)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
}

int getprime(primetest)
{

}


int main()
{
	//x² - 2x = 2를 풀이하시오.
	printf("x² - 2x = 2를 풀이하시오.\n");
	Quadformula(1, -2, -2);
	//힌트 : 2차 방정식을 풀기 위해선 근의 공식을 이용해봅니다.


	//2. 다음 조건을 만족하는 printRank를 구현하세요.
	int rank = 0;
	printf("등수를 입력하세요.\n");
	scanf_s("%d", &rank);
	PrintRank(rank);

	//3. 다음 조건을 만족하는 average를 구현하세요.
	int score = 0;
	printf("3, 100, 95, 90의 평균은\n");
	float avg1 = average(3, 100, 95, 90); //95
	printf("%.2f\n", avg1);
	printf("4, 100, 95, 90, 80의 평균은\n");
	float avg2 = average(4, 100, 95, 90, 80); //91.25
	printf("%.2f\n", avg2);
	//힌트) printf("%.2f, value);를 활용하면 소수점 2자리까지 출력 가능

	//4. 다음 조건을 만족하는 isOdd를 구현하세요.
	isOdd(3); //"YES"
	isOdd(4); //"NO"
	isOdd(5); //"YES"

	//5. 다음 조건을 만족하는 getPrime을 구현하세요.
	int i, num, count = 0;
	printf("정수를 입력하시오:");	
	scanf_s("%d", &num);
	for (i = 2; i <= num; i++)
	{
		if (num % i == 0) count++;
	}
	if (count == 1)
		printf("소수입니다.");
	else
		printf("소수가 아닙니다.");

	return 0;
}
