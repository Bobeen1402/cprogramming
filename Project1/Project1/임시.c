#include <stdio.h> //����� ����
#include <stdarg.h> //���� ���� ����
#include <math.h> //���� ��� ����

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
	//���޹��� ���� �������� �����մϴ�.
	va_start(args, score);
	//������κ���, score������ �۾��� �����մϴ�.

	for (int i = 0; i < score; i++)
	{
		printf("%d ", va_arg(args, score));
		//va_arg(���� �̸�, �ڷ���)�� ����
		//������ �ִ� �ڷ��� �������� ���� �޾ƿɴϴ�.
	}
	printf("\n");
	va_end(args); //�۾� �Ϸ�
}

int main()
{
	//x�� - 2x = 2�� Ǯ���Ͻÿ�.
	double a = 1;
	double b = -2;
	double c = -2;
	printf("x�� - 2x = 2�� Ǯ���Ͻÿ�.\n");
	Quadformula(a, b, c);
	//��Ʈ : 2�� �������� Ǯ�� ���ؼ� ���� ������ �̿��غ��ϴ�.

	//2. ���� ������ �����ϴ� printRank�� �����ϼ���.
	int rank = 0;
	printf("���� ������ �����ϴ� printRank�� �����ϼ���.\n");
	scanf_s("����� �Է��ϼ���.", &rank);
	PrintRank(rank);

	//3. ���� ������ �����ϴ� average�� �����ϼ���.
	printf("���� ������ �����ϴ� average�� �����ϼ���.");
	float result1 = average(3, 100, 95, 90); //95.00
	float result2 = average(4, 100, 95, 90, 80); //91.25
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
			printf("�� ���� �Ҽ��� �ƴմϴ�.\n")
		}
	}

	return 0;
}