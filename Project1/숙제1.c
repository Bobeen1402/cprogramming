#include <stdio.h> //����� ����
#include <stdarg.h> //���� ���� ����
#include <math.h> //���� ��� ����

int Quadformula(a, b, c)
{
	float result1;
	float result2;
	result1 = - b + sqrt(b*b - 4.0 * a * c) / 2.0 * a;
	result2 = - b - sqrt(b*b - 4.0 * a * c) / 2.0 * a;
	printf("���� %.2f�� %.2f\n", result1, result2);
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
	//���޹��� ���� �������� �����մϴ�.
	va_start(args, score);
	//������κ���, score������ �۾��� �����մϴ�.

	float sum = 0;
	for (int i = 0; i < score; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args); //�۾� �Ϸ�

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
	//x�� - 2x = 2�� Ǯ���Ͻÿ�.
	printf("x�� - 2x = 2�� Ǯ���Ͻÿ�.\n");
	Quadformula(1, -2, -2);
	//��Ʈ : 2�� �������� Ǯ�� ���ؼ� ���� ������ �̿��غ��ϴ�.


	//2. ���� ������ �����ϴ� printRank�� �����ϼ���.
	int rank = 0;
	printf("����� �Է��ϼ���.\n");
	scanf_s("%d", &rank);
	PrintRank(rank);

	//3. ���� ������ �����ϴ� average�� �����ϼ���.
	int score = 0;
	printf("3, 100, 95, 90�� �����\n");
	float avg1 = average(3, 100, 95, 90); //95
	printf("%.2f\n", avg1);
	printf("4, 100, 95, 90, 80�� �����\n");
	float avg2 = average(4, 100, 95, 90, 80); //91.25
	printf("%.2f\n", avg2);
	//��Ʈ) printf("%.2f, value);�� Ȱ���ϸ� �Ҽ��� 2�ڸ����� ��� ����

	//4. ���� ������ �����ϴ� isOdd�� �����ϼ���.
	isOdd(3); //"YES"
	isOdd(4); //"NO"
	isOdd(5); //"YES"

	//5. ���� ������ �����ϴ� getPrime�� �����ϼ���.


	for (int i = 1; i <= 10; i++)
	{
		if (getPrime(i) == 1)
		{
			printf("�� ���� �Ҽ��Դϴ�.\n");
		}

		else
		{
			printf("�� ���� �Ҽ��� �ƴմϴ�.\n");
		}
	}


	return 0;
}