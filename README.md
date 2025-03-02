# cprogramming

C언어 프로그래밍 


# 목차
- [1. 코드 기본 구성](#1-코드-기본-구성)
- [2. 서식](#2-서식)
  * [2-1. 서식 지정자](#2-1-서식-지정자)
  * [2-2. 이스케이프 시퀀스](#2-2-이스케이프-시퀀스)
  * [2-3. 데이터 표현법(리터럴(literal))](#2-3-데이터-표현법리터럴literal)
- [3. 변수](#3.-변수)
  * [3-1. 변수(variable)](#3-1-변수variable)
  * [3-2. 자료형(Type)](#3-2-자료형Type)
  * [3-3. 대표적인 자료형](#3-3-대표적인-자료형)
- [4. 입력](#4-입력)
  * [4-1. #define CRT_SECURE_NO_WARNINGS](#4-1-define-CRT_SECURE_NO_WARNINGS)
  * [4-2. #include <stdio.h>](#4-2-include-stdioh)
- [5. 연산자](#5-연산자)
- [6. if문](#6-if문)
  * [6-1. 동물 테스트(if문 예시)](#6-1-동물-테스트if문-예시)
- [7. 배열과 반복문](#7-배열과-반복문)
  * [7-1. 배열 연습문제](#7-1-배열-연습문제)
  * [7-2. 배열의 길이](#7-2-배열의-길이)
  * [7-3. 2차원 배열](#7-3-2차원-배열)
  * [7-4. 2차원 배열 예시](#7-4-2차원-배열-예시)
- [8. 포인터](#8-포인터)
- [9. 함수](#9-함수)
  * [9-1. void 함수](#9-1-void-함수)
  * [9-2. 가변인자](#9-2-가변인자)
  * [9-3. 함수 예시 문제 1](#9-3-함수-예시-문제-1)
- [10. 포인터와 함수](#10-포인터와-함수)
- [11. 함수 포인터를 이용한 콜백 함수](#11-함수-포인터를-이용한-콜백-함수)

# 1. 코드 기본 구성
+ 전처리기
+ main

```c
#include <stdio.h>

int main()
{
   printf("C programming");
   return 0;
}
```
1. #include <stdio.h>는 프로그램 코드 내에 C언어의 입력,출력 기능을 사용하기 위해 추가해야 하는 코드입니다.

2. main은 함수의 이름입니다.
3. 함수는 프로그램을 구성하는 구성 요소, 단위, 명령문 집합을 의미합니다.
4. C언어에서 main 함수는 프로젝트에서 기능을 작동시키기 위한 함수입니다.
5. 함수의 () 부분은 해당 함수를 실행할 때 전달해줄 값을 적는 위치입니다. 현재는 따로 작성되지 않았습니다.

6. int는 해당 함수의 데이터 형태입니다.
7. int는 C언어에서 정수(Integer)를 의미합니다.

8. return은 함수를 종료시키는 키워드(keyword)입니다.
9. 키워드는 C언어에서 지정된 특정 기능을 수행하는 영단어를 의미합니다.
10. return 다음에는 전달할 값을 작성할 수 있습니다. 이 때 전달하는 값은 함수의 데이터 형태에 따라 결정됩니다.

11. ;(세미콜론)은 c언어에서 명령문의 마지막에 붙여주는 기호입니다.

12. {}(블록)은 코드의 작성 범위(scope)를 표현하는 기호입니다.

<hr/>

+ printf
> stdio.h에서 제공해주는 C언어의 대표적인 문장 출력용 기능(함수)입니다.<br>
> 일반적으로는 printf("작성하고 싶은 문장");을 작성해 사용합니다.

예시)
```c
int main()
{
   printf("Good day to Study!");
   return 0;
}
```

<hr/>

# 2. 서식

<hr/>

### 2-1. 서식 지정자
|지정자 명칭|설명|
|-----|-----|
|%d|정수에 대한 지정자|
|%f|실수에 대한 지정자|
|%c|문자에 대한 지정자|

## 2-2. 이스케이프 시퀀스
|\영단어 소문자|설명|
|-----|-----|
|\n|Enter 키|
|\t|Tab 키|
|\"|"에 대한 표현|
|\'|'에 대한 표현|

## 2-3. 데이터 표현법(리터럴(literal))
리터럴은 c언어에서 데이터를 표기하는 방법이며 , 값을 그대로 입력한 것을 의미합니다.
|종류|작성 방법|
|-----|-----|
|정수|그대로 기입(예: 10)|
|실수|마지막에 f(예: 10.0f)|
|문자|작은따옴표 안에 작성(예: 'a')|
|문장|큰따옴표 안에 작성(예: "apple")|

# 3. 변수

## 3-1. 변수(variable)
+ C언어에서 특정 하나의 데이터를 사용자가 이름지어서 저장하는 방법(공간)
+ 변수에 저장되어있는 데이터의 값은 일반적으로 언제든지 변경이 가능합니다.
+ C언어에서의 변수는 변수마다 정해진 데이터의 형태(자료형)이 존재하며, 각 변수는
할당된 값을 가지고 있습니다.

<hr/>

## 3-2. 자료형(Type)
프로그램이 데이터를 판단하는 기준, 데이터의 형태를 의미합니다.

## 3-3. 대표적인 자료형
|이름|표현하는 형태|크기|표현 범위|
|-----|-----|-----|-----|
|int|정수|4byte|-2147483648 ~ 217483647|
|float|실수|4 byte|3.4 * 10 -38제곱 ~ 3.4 * 10 +38제곱(소수점 이하 6자리까지 정확하게 표현)|
|char|문자|1byte|-128 ~ 127|

<hr/>

```c
int main()
{
	int count;
	//변수에 대한 선언
	//자료형 변수명;

	//변수를 선언할 경우 자료형의 크기만큼 메모리 공간을 확보하여 그 위치에 변수의 이름을
	//지정하게 됩니다.
	count = 5;
	//변수에 대한 초기화
	//변수명 = 타입에 맞는 값;

	printf("현재의 카운트는 %d입니다.\n", count);

	//변수를 만들 때 지켜줄 이름 규칙
	//1. 대소문자를 구분합니다.
	//2. 변수의 이름은 숫자가 맨 앞에 나올 수 없습니다.
	//3. 변수의 이름에 특수문자 사용이 불가능합니다.(예외) _, $는 C언어에서 변수 이름으로 사용 가능)
	//4. 변수의 이름으로 키워드(keyword)를 사용할 수 없습니다.

	//변수의 선언과 초기화를 동시에 진행할 수 있습니다.
	float PI = 3.141592f;

	//데이터의 형태가 같다면, 여러 개를 한번에 선언할 수 있습니다.
	int a, b, c;

	//선언과 초기화를 동시에 여러 개를 진행할 수 있습니다.
	int number3 = 50, number4 = 40;

	//C언어에서 10진수 이외의 8진수나 16진수를 지정할 수 있습니다.
	int octo = 015; //숫자 앞에 0이 붙으면 8진수
	int hexa = 0x6; //숫자 앞에 0x가 붙으면 16진수

	printf("8진수 octo = %o\n", octo);
	printf("16진수 hexa = %x\n", hexa);
	printf("8진수 표기법 출력 octo = %#o\n", octo);
	printf("16진수 표기법 출력 hexa = %#x\n", hexa);
	printf("8진수 표기법 출력(8자리) octo : %0.8o\n", octo);
	printf("16진수 표기법 출력(8자리) hexa : %0.8x\n", hexa);
	return 0;
}
```
# 4. 입력

<hr/>

## 4-1. #define CRT_SECURE_NO_WARNINGS
+ 프로그램에서의 안전 검사를 하지 않도록 설정하는 코드
+ 이 코드를 추가할 경우 visual studio 내에서 scanf를 사용할 수 있습니다.

## 4-2. #include <stdio.h>
+ 입력(input)
+ 사용자가 직접 값을 입력하고 그 값을, 특정 위치에 전달합니다.
+ 일반적으로는 변수를 만들고, 그 변수에 입력한 값을 적용하는 방식으로 사용합니다.

```c
int main()
{
	int number;
	printf("Input the number : ");
	scanf_s("%d", &number);
	//Visual Studio에서 사용하는 경우라면 scanf_s를 통해 오류를 막을 수 있습니다.
	printf("number : %d\n", number);

	//getchar()
	//키보드로부터 하나의 문자를 읽어내는 함수
	//이 기능은 입력 버퍼를 비우는 용도로도 사용됩니다.
	//입력 버퍼(buffer) : C언어에서 입력을 진행할 경우 바로 값을 넘기는게 아니라
	//임시로 데이터를 저장하는 별도의 공간에 값을 넣고 전달하는 방식입니다.
	//문자를 다 받기 때문에 enter같은 기능도 값으로 남게 됩니다.

	//putchar(문자)
	//전달받은 문자 하나를 화면에 출력하는 기능 

	getchar(); //키를 하나 받겠습니다.(이걸로 남아있는 enter를 처리합니다.)

	char key;
	printf("키를 하나 입력해주세요 >> ");
	key = getchar();
	putchar(key);

	//gets(), puts()
	//문자열에 대한 입력과 출력을 진행할 때 편하게 사용할 수 있습니다.
	//문자열(문장)이랑 char 형태의 데이터를 묶음으로 표현한 것을 의미합니다.

	getchar(); //위에서 입력한 key 다음 동작인 enter키에 대한 값을 받아줍니다.

	//문자열 만드는 방법
	//char 변수명[문자의 개수];
	char word[10];
	printf("단어를 입력해주세요 >> ");
	gets(word); //문자열 입력
	puts(word); //전달한 문장 출력

	//주의사항 : C언어에서 한글을 입력하는 경우 한글 한 단어에 2칸을 소모합니다.
	//          현재 word는 10개의 단어를 사용할 수 있습니다.
	//			한글을 기준으로는 5개의 단어까지 입력이 가능합니다.
	//			단 입력을 진행할 경우 문자의 개수보다 1개정도 적게 작성합니다.
	//		    따라서 영단어는 9글자까지, 한글은 4글자까지 가능

	//getchar();

	char item[10];
	printf("아이템의 이름을 입력해주세요 >> ");
	scanf("%s", item);
	//문자열을 받을 경우에는 item 앞에 &를 붙이지 않아도 됩니다.
	//%s는 문자열을 받는 지정자입니다.
	printf("아이템의 이름 : %s 입니다.\n", item);

	return 0;
}
```
# 5. 연산자

```c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//연산자(operator)
//프로그램에서 연산을 진행할 때 사용하는 기호
//ex) 10 + 5 라고 할 때 연산자는 +
//연산을 진행할 때 필요한 식이나 값을 항이라고 부르겠습니다.
//위의 식에서 +는 10,5 2개의 값이 필요하니 항이 2개라고 표현합니다.(이항)
//항이 1개 -> 단항 , 항이 2개 -> 이항 항이 3개 -> 삼항
int main()
{
	int a, b, c;
	a = 5;
	b = 3;

	c = a + b;
	printf("%d + %d = %d\n", a, b, c);

	c = a % b;
	printf("%d %% %d = %d\n", a, b, c);
	//산술 연산자
	//    +,   -,    * ,  /  , %
	//더하기,빼기,곱하기,나누기,나머지

	c *= 3;
	printf("c의 값 = %d\n", c);
	//대입 연산자
	// = 을 이용해 값을 대입할 수 있습니다.
	//ex) a = 5라고 하면 a에 5의 값을 대입합니다.

	//혼합 대입 연산자
	// = 전에 +,-,*,%를 작성하는 경우 대입하려는 값에 연산을 진행한 결과를 대입합니다.
	//ex) 위의 코드에서 추가적으로 다음과 같이 명령을 작성합니다.
	// a += 5;라고 적으면 a에 5를 더한 결과를 a에 대입합니다. 따라서 10이 됩니다.
	// 즉 a += 5는 a = a + 5와 같은 말입니다.

	a = 10;
	b = a++;
	printf("a = %d, b = %d\n", a, b);

	b = ++a;
	printf("a = %d, b = %d\n", a, b);
	//증감 연산자
	//변수의 값을 1 증가 / 감소 시킬 때 사용하는 연산자(단항)
	//++, --

	//작성 위치에 따라 판정이 다르게 처리됩니다.
	//b = a++일 경우를 후위형 증감 연산이라고 부르며, 이 경우에는 연산을 먼저 진행한 뒤, a의 값을 1 증가시킵니다.
	//따라서 대입 연산에 의해 b는 a(10)의 값을 대입하게 되고, 그 후에 a가 1 증가합니다.

	//b = ++a일 경우를 전위형 증감 연산이라고 부르며, 이 경우에는 a에 대한 1 증가를 먼저 진행하고, 연산을 처리합니다.
	//a가 1 증가해서 12가 되고, 그 후 b에 대입하게 됩니다. b = 12

	//관계연산자
	//연산자를 기준으로 왼쪽과 오른쪽 값의 크기를 비교해서 참 또는 거짓을 확인합니다.
	//참일 경우 1을 거짓일 경우 0으로 처리됩니다.

	//관계 연산자는 아래의 if문 같이 조건에 따라 코드를 작성하는 상황에 사용됩니다.

	a = 10;
	b = 7;

	//if(조건식)
	//{
	// 조건식이 만족할 때, 실행할 명령문;
	//}
	if (a > b)
	{
		printf("a는 b보다 큰 값입니다.\n");
	}
	if (a >= b)
	{
		printf("a는 b보다 크거나 같습니다.\n");
	}

	if(a == b) //a와 b의 크기가 동일한지를 확인합니다.
	{
		printf("a는 b와 같습니다.\n");
	}

	if (a != b)//a와 b가 서로 다른 경우를 확인합니다.
	{
		printf("a는 b와 다릅니다.\n");
	}
	return 0;
}

```
<hr/>

```c

#include <stdio.h>


int main()
{
	int a = 11;
	int b = 14;
	int c;

	printf("a = %d b = %d\n", a, b); // 11 14
	c = a & b;  //a AND b   --> 교집합
	printf("a & b = %d\n", c); // 10

	c = a | b; //a OR b    --> 합집합
	//a와 b의 값을 전부 1로 처리합니다. 이때 겹치는 값은 겹쳐집니다.
	printf("a | b = %d\n", c); //15
	//11 = 1011
	//14 = 1110
	//c  = 1111
	c = a ^ b; //a XOR b 
	//XOR(Exclusive OR) : 배타적 논리합, 대칭 차집합
	//a와 b를 비교했을 때 비트가 다른 지점을 1, 같으면 0으로 처리합니다.
	//이 연산 방식은 암호학의 기초로 많이 활용됩니다.
	//1011
	//1110
	//0101  ->  4 + 1 -> 5
	printf("a ^ b = %d\n",c);

	c = 6;
	printf("c= %d\n", ~c);
	//NOT 연산
	//비트를 반대로 처리하는 연산

	a = 1;
	c = a << 2;
	printf("c = %d\n", c);
	a = 3;
	c = a << 3;
	printf("c = %d\n", c);
	//shift 연산
	//a << 2 일 경우 a를 비트 2칸 이동합니다. 비트 2칸은 2의 2제곱(4)를 의미하니
	//a * 4로 해석이 가능합니다.

	a = 16;
	c = a >> 4;
	printf("c = %d\n", c);
	//shift 연산
	//a >> 4일 경우 a를 비트 4칸 이동합니다. 비트 4칸은 2의 4제곱(16)을 의미합니다.
	//a / 16과 동일한 결과

	//2진수 계산법
	//1. 계산할 값을 2의 제곱수로 분배합니다.
	//2. 이때 2의 0제곱(1)도 범위에 포함합니다.
	//3. 가장 큰 값부터 짤라냅니다.
	
	//제곱 수
	//1 2 4 8 16 32 64 128
	//11 = 8     + 2 + 1  --> 1011
	//14 = 8 + 4 + 2      --> 1110

	//11 & 14는 11과 14가 가지고 있는 비트 중에서 겹치는 부분만 1로 처리, 나머지는 다 0으로
	//1011
	//1110
	//1010  => 8 + 2 => 10



	//비트 연산(bitwise)
	//데이터를 비트 단위로 처리하는 연산자입니다.
	//컴퓨터는 데이터를 2진 코드로 관리합니다.(이진수)

	//비트 연산 사용 목적
	//1. 곱하기와 나누기 연산을 더 빠르게 진행할 수 있습니다.
	//2. 프로그램에서 이미지 처리하는 작업(ex. RGB 값 분리, 결합, 픽셀 값 조작)
	//3. 데이터를 압축하는 작업
	//4. 네트워크 관련 기술(프로토콜 단위에서 IP주소, 포트 번호 같은 데이터를 비트로 분리해
	//   네트워크와 호스트 부분에 대한 식별)
	//5. 임베디드 시스템(하드웨어 레지스터에 대한 조작)
	//등등 다양한 C언어 관련 기술에서 사용되는 핵심 기술 중 하나입니다.

	return 0;
}
```

# 6. if문
```c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//if문 사용 방법
//if(조건식)
//{
// 조건식이 만족할 때 실행할 명령문;
//}

//if - else 문
//if(조건식)
//{
// 조건식이 만족할 때 실행할 명령문;
//}
//else
//{
// 조건식이 만족하지 않았을 경우 실행할 명령문;
//}

//if - else if문
//if(조건식)
//{
// 조건식이 만족할 때 실행할 명령문;
//}
//else if(조건식2)
//{
// 위의 조건식이 만족하지 않고, 조건식2가 만족하고 있는 경우 실행할 명령문;
//}

int main()
{
	int number1, number2;

	printf("두 개의 정수를 입력해주세요.(단, 큰 수를 먼저 입력합니다.) >> ");
	scanf("%d %d", &number1, &number2);

	if (number1 > number2)
	{
		printf("두 수의 곱은 %d입니다.\n", number1 * number2);
	}
	else
	{
		printf("number1이 number2보다 더 큰 값이어야 합니다.\n");
	}

	//0부터 100점 사이의 점수를 하나 입력받습니다.
	//점수가 60점 이상일 경우 "합격"을 화면에 출력합니다.
	//점수가 60점 미만일 경우라면 "불합격"을 출력하도록 프로그램 코드를 구현하세요.
	//점수가 해당 범위의 값이 아닐 경우 "잘못된 입력입니다."를 화면에 출력합니다.

	int score;
	printf("0점부터 100점 사이의 점수를 하나 입력해주세요 >> ");
	scanf("%d", &score);

	//[일반적인 풀이]
	//if (score < 0)
	//{
	//	printf("잘못된 입력입니다.\n");
	//}
	//else if (score > 100)
	//{
	//	printf("잘못된 입력입니다.\n");
	//}
	if (score < 0 || score > 100)  //A OR B 조건 A 또는 조건 B가 만족할 경우 실행
	{
		printf("잘못된 입력입니다.\n");
	}
	else if (score >= 60)
	{
		printf("합격\n");
	}
	else if (score < 60) 
	{
		printf("불합격\n");
	} 


	return 0;
}

```
## 6-1. 동물 테스트(if문 예시)

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//https://www.banggooso.com/gl/1034
//해당 홈페이지에서 진행되고 있는 숲속 동물 테스트를 연출해보는 예제

int main()
{
	//문항에 대한 저장(배열)
	//자료형 배열명[] = {값1,값2,값3,...};

	//배열의 값 하나는 배열명[값의 위치]로 접근이 가능합니다.
	//값의 위치(인덱스)는 0번부터 배열의 데이터의 개수(길이)-1까지 제공됩니다.

	int selected[] = {0,0,0,0,0,0,0,0,0,0,0,0}; //인덱스 0 ~ 11까지 제공 중 



//[시작 화면]
	system("title 숲속 동물 테스트");
	printf("어느날 잠에서 깬 당신은\n내몸이 인간의 몸이 아님을 느낍니다.\n\n숲속의 동물이 된 나는\n무엇을 하고 있을까요?\n");
	int select;
	printf("1. 숲속으로 떠나기 ");
	scanf("%d", &select);
	system("cls"); //콘솔 화면 지우기

//[1번 문항]
	printf("\t일어나보니 오랜만에\n\t깨끗한 하늘이 보인다면\n");
	printf("\t1.\"화창한데 오늘 뭐하지?\"\n\t뭐할지 고민한다.\n");
	printf("\t2.\"기분 좋은 일들이 생길 것 같은 날이야!\"\n\t일단 기분이 좋다.\n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[0] = 1;
	}
	else if(select == 2)
	{
		selected[0] = 2;
	}
	system("cls");
//[2번 문항]
	printf("\t숲속으로 외출하기 전,\n");
	printf("\t1. 생각나는 대로 챙겨 나간다.\n");
	printf("\t2. 미리 준비해둔 옷과 가방을 챙겨 나간다.\n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[1] = 1;
	}
	else if (select == 2)
	{
		selected[1] = 2;
	}
	system("cls");
//[3번 문항]
	printf("\t처음 온 숲속을 산책할 때\n");
	printf("\t1. 입구에 있는 지도를 보고\n어디 갈지 무엇을 볼 지 정한다.\n");
	printf("\t2. 지도를 한번 슥 보고 발길 닿는대로 간다.\n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[2] = 1;
	}
	else if (select == 2)
	{
		selected[2] = 2;
	}
	system("cls");
//[4번 문항]
	printf("\t귀여운 다람쥐들을 만난다면,\n");
	printf("\t1. \"처음 보는 동물들도 모두 친구친구!\"\n먼저 가서 반갑게 말건다.\n");
	printf("\t2. \"귀여워서 심멎이지만\"\n멀리서 지켜본다.\n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[3] = 1;
	}
	else if (select == 2)
	{
		selected[3] = 2;
	}
	system("cls");
//[5번 문항]
	printf("\t다람쥐 친구가 피부병이 났다고 하소연을 했다\n");
	printf("\t1. \"피부에 좋은 친환경 제품을 써보는건 어때?\"\n 해결방안을 제시한다.\n");
	printf("\t2. \"아프겠다...어떡해ㅠㅠㅠ\"\n같이 아픔에 공감해준다.\n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[4] = 1;
	}
	else if (select == 2)
	{
		selected[4] = 2;
	}
	system("cls");
//[6번 문항]
	printf("\t사람들이 나무를 베어가\n소중한 숲속이 황량해진것을 본다면\n");
	printf("\t1. 나의 정들었던 공간이 망가진것에 슬퍼진다.\n");
	printf("\t2. 조만간 새 보금자리를 찾기로 마음 먹는다.\n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[5] = 1;
	}
	else if (select == 2)
	{
		selected[5] = 2;
	}
	system("cls");
//[7번 문항]
	printf("\t한 여름에 눈이 온다는 기후 변화 소식을 듣는다면\n");
	printf("\t1. \"우리가 개선할 수 있는게 뭘까?\"\n 현실적으로 고민해본다.\n");
	printf("\t2. \"앞으로 숲도...지구도 다 망가지는거 아냐?\"\n미래를 걱정한다.\n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[6] = 1;
	}
	else if (select == 2)
	{
		selected[6] = 2;
	}
	system("cls");
//[8번 문항]
	printf("\t사람들이 집 앞 시냇가에 쓰레기를 버리고 있다면?\n");
	printf("\t1. 다가가서 쓰레기를 가져가라고 눈치를 준다.\n");
	printf("\t2. 소란 일으키기 싫으니 그냥 내가 치운다.\n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[7] = 1;
	}
	else if (select == 2)
	{
		selected[7] = 2;
	}
	system("cls");
//[9번 문항]
	printf("\t숲속 환경 문제로 급하게 동물 회의가 열렸다.\n");
	printf("\t1. 그동안 내가 보고 느낀 것들을 적극적으로 설명한다.\n");
	printf("\t2. 다른 동물들은 어떻게 생각하는지 먼저 들어본다.\n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[8] = 1;
	}
	else if (select == 2)
	{
		selected[8] = 2;
	}
	system("cls");
//[10번 문항]
	printf("\t곰이 자신에겐 사이즈가 안맞는다며\n나에게 딱 맞는 옷을 줬다.\n가장 먼저 든 생각은?");
	printf("\t1. \'나를 생각하고 선물을 주다니...\'감동 받는다.\n");
	printf("\t2. \'나한테 딱 맞는 사이즈네!\'신난다.\n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[9] = 1;
	}
	else if (select == 2)
	{
		selected[9] = 2;
	}
	system("cls");
//[11번 문항]
	printf("\t잠자리에 들 시간이 되었는데\n내일 있을 동물 회의를 준비해야 한다.\n");
	printf("\t1. 큰 주제 안에서 무엇을 말할지 생각해본다.\n");
	printf("\t2. 목차 별 꼼꼼하게 회의 안건을 준비한다.\n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[10] = 1;
	}
	else if (select == 2)
	{
		selected[10] = 2;
	}
	system("cls");
//[12번 문항]
	printf("\t숲속 체험이 끝나고\n현실에 돌아와 일기를 쓴다면,\n");
	printf("\t1. 숲속에서 겪었던 일들을 자세하게 묘사해서 쓴다.\n");
	printf("\t2. 숲속에서 겪었던 감정들을 적는다.\n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[11] = 1;
	}
	else if (select == 2)
	{
		selected[11] = 2;
	}
	system("cls");

//반복문
//12번 반복을 진행하는 코드(i가 0에서 시작해서 작업이 끝날 때마다 1씩 i가 증가, i가 12보다 작을 동안 반복)
	int total = 0;
	for (int i = 0; i < 12; i++)
	{
		total += selected[i];
	}
	printf("숲속에서 당신은 ");
	//12 ~ 13점
	if (total >= 12 && total <= 13)
	{
		printf("새롭고 짜릿한게 좋은 꾸러기 호랑이\n");
	}
	else if (total == 24)
	{
		printf("한껏 센치한 멜랑꼴리 늑대\n");
	}


	return 0;
}

```

# 7. 배열과 반복문

```c

#include <stdio.h>

//배열
//같은 형태의 데이터를 순서대로 저장하는 데이터
//자료형 배열명[배열의 길이];
//자료형 배열명[] = {값1,값2,값3,....};

//인덱스(index)
//배열에 저장되어있는 데이터의 위치를 표현하는 정수형 데이터
//인덱스의 시작 값은 0입니다.
//인덱스의 마지막 값은 만들어진 배열의 전체 데이터 개수(길이) -1까지 제공됩니다.

//요소(element)
//배열 안에 있는 값 그 자체를 의미하는 말

//반복문 for문
//for(초기식;조건식;증감식)
//{
//  조건이 만족하는 동안 실행 시킬 명령문;
//}

int main()
{
	int scores[] = { 90,100,85 };

	printf("국어점수 = %d 영어 점수 = %d 수학 점수 = %d\n", scores[0], scores[1], scores[2]);
	//배열을 이용하면 기존에는 3개의 변수를 만들어서 표현해야 했다면, 지금은 편하게 하나의 이름에 숫자만 넣어서
	//표현하기가 쉽습니다.

	int total = 0; //점수들의 총 합을 표현합니다.
	total = scores[0] + scores[1] + scores[2];
	printf("총점 = %d\n", total);
	total = 0; //리셋

	//또는 반복문을 이용해 반복적인 동작을 하나의 코드로 처리할 수 있습니다.
	for (int i = 0; i < 3; i++)
	{
		total += scores[i];
	}
	printf("총점 = %d\n", total);
	//반복문 실행 순서
	//1. int i = 0; 최초 실행
	//2. 조건 확인( i < 3)
	//2-1. 조건이 맞는 경우 total += score[i] 실행
	//     total = 90
	//2-2. i++ 진행 i = 1
	//이 과정을 i < 3이 아닐 때까지 반복합니다.
	//3. 조건이 안맞는 경우 --> 작업 종료




	return 0;
}

```
## 7-1. 배열 연습문제

```c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//1. 배열에 있는 값을 순차적으로 출력하세요.
	int numbers[] = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", numbers[i]);
	}

	//현재 위에는 배열 numbers가 존재하고 있습니다.
	//해당 값들을 반복문을 이용해 역순으로 출력해주세요.
	for (int i = 9; i >= 0; i--) //9는 범위의 값
	{
		printf("%d ", numbers[i]);
	}

	int datas[10];
	//현재의 정수형 데이터를 저장할 수 있는 배열 datas가
	//준비되어 있습니다.
	//입력문을 이용해서 배열에 데이터를 순서대로 추가하는 작업을 진행합니다.
	for (int i = 0; i < 9; i++)
	{
		printf("입력할 값을 작성해주세요 >> ");
		scanf_s("%d", &datas[i]);
		//datas[0]부터 datas[9]까지 총 10개의 데이터가 입력이 진행됩니다.
	}

	for (int i = 0; i < 9; i++) //printf용으로 반복 한 번 더
	{
		printf("%d", datas[i]);
	}

	//사용자는 5개의 정수를 배열로 입력받습니다.
	//그 후 숫자를 하나 더 추가로 입력합니다.
	//입력한 숫자가 배열에 몇 개 있는지 확인할 수 있는 프로그램을 구현하세요.

	int iArray[5];

	for (int i = 0; i < 5; i++)
	{
		printf("5개의 정수를 입력하세요. >>");
		scanf_s("%d", &iArray[i]);
	}

	int search_number;
	int count = 0;
	printf("추가로 정수를 입력하세요. >>");
	scanf_s("%d", &search_number);

	for (int i = 0; i < 5; i++)
	{
		//입력한 값이 i번째 데이터일 경우 카운트 1 증가
		if (search_number == iArray[i])
		{
			count++;
		}
	}
	printf("조사한 값의 개수는 %d개입니다.\n", count);

	return 0;
}

```

## 7-2. 배열의 길이

```c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//C언어에서의 배열
//자료형 배열명[길이];

//배열에 값(요소: element)을 넣는 방법
//배열명[인덱스] = 값;
//인덱스의 범위 = 0부터 배열의 길이 -1까지의 범위

//배열의 길이를 구하는 방법
// sizeof(배열명) / sizeof(자료형);

//배열의 크기를 구하는 방법
// sizeof(배열명);


int main()
{
	int iArray[5]; // 0 ~ 4
	iArray[0] = 1; //iArray의 0번째 요소는 1이 됩니다.
	iArray[1] = 2;
	iArray[2] = 3;
	iArray[3] = 4;
	iArray[4] = 5;

	printf("배열 iArray가 가지고 있는 요소 : ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", iArray[i]);
	}
	printf("\n");
	int size = sizeof(iArray);
	printf("배열의 크기 : %d byte\n", size);

	int length = sizeof(iArray) / sizeof(int);

	printf("배열의 길이 : %d\n", length);
	printf("배열의 이름: %p\n", iArray);
	//배열은 같은 형태의 데이터를 묶어서 따로 관리하는 데이터입니다.
	//각 배열의 요소는 일정한 간격으로 주소를 가지게 됩니다.
	//배열의 첫 번째 요소의 주소는 배열의 시작 주소입니다. 배열의 시작 주소는 배열의 이름입니다.
	//배열은 선언과 동시에 데이터를 저장할 연속적인 메모리 저장 공간을 가지게 됩니다.
	//배열은 지정되는 값으로, 주소에 대한 변경을 진행할 수 없습니다.(수정 불가능한 데이터)

	return 0;
}

```

## 7-3. 2차원 배열

```c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//C언어에서의 배열
//자료형 배열명[길이];

//배열에 값(요소: element)을 넣는 방법
//배열명[인덱스] = 값;
//인덱스의 범위 = 0부터 배열의 길이 -1까지의 범위

//배열의 길이를 구하는 방법
// sizeof(배열명) / sizeof(자료형);

//배열의 크기를 구하는 방법
// sizeof(배열명);


int main()
{
	int iArray[5]; // 0 ~ 4
	iArray[0] = 1; //iArray의 0번째 요소는 1이 됩니다.
	iArray[1] = 2;
	iArray[2] = 3;
	iArray[3] = 4;
	iArray[4] = 5;

	printf("배열 iArray가 가지고 있는 요소 : ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", iArray[i]);
	}
	printf("\n");
	int size = sizeof(iArray);
	printf("배열의 크기 : %d byte\n", size);

	int length = sizeof(iArray) / sizeof(int);

	printf("배열의 길이 : %d\n", length);
	printf("배열의 이름: %p\n", iArray);
	//배열은 같은 형태의 데이터를 묶어서 따로 관리하는 데이터입니다.
	//각 배열의 요소는 일정한 간격으로 주소를 가지게 됩니다.
	//배열의 첫 번째 요소의 주소는 배열의 시작 주소입니다. 배열의 시작 주소는 배열의 이름입니다.
	//배열은 선언과 동시에 데이터를 저장할 연속적인 메모리 저장 공간을 가지게 됩니다.
	//배열은 지정되는 값으로, 주소에 대한 변경을 진행할 수 없습니다.(수정 불가능한 데이터)

	return 0;
}

```

## 7-4. 2차원 배열 예시

```c

#include <stdio.h>

//2차원 배열 : 배열의 요소가 배열인 형태를 의미합니다.
//ex) int iarray[] = {1,2,3,4,5};   1차원 배열
//ex) int iarray2[][] = { {1,2,3}, {4,5,6}, {7,8,9}}; 2차원 배열

//주로 for문을 이용해서 배열을 출력을 하게 되는데 그 기준으로 배열 만드는 방법
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
			printf("%2d ", iArray2[i][j]);
		}
		printf("\n"); //띄어쓰기 진행(열 구분)
	}
	//i가 0일 때, j가 0부터 3까지 반복
	//i가 1일 때, j가 0부터 3까지 반복
	//i가 2일 때, j가 0부터 3까지 반복
	//작업 종료


	int value2[3][3]; //3 x 3 의 형태의 2차원 배열 선언
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
			printf("%d ", value2[i][j]);
		}
		printf("\n");
	}


	//연습 문제
	//출력 예시를 참고하여, 이차원 배열 value3를 만드세요.
	//단, 배열 생성과 초기화를 동시에 진행하지 않습니다.
	// 
	//  값       인덱스
	//1 6 7    00 01 02
	//2 5 8    10 11 12
	//3 4 9    20 21 22

	int value3[3][3];
	value = 1;

	//작업
	for (int i = 0; i < 3; i++)
	{
		//i가 짝수인 경우에는 순서대로 값이 증가
		if (i % 2 == 0)
		{
			for (int j = 0; j < 3; j++)
			{
				//1. 현재 값의 증가가 아래로 진행되고 있음. 따라서 i와 j의 대입 순서를 변경
				value3[j][i] = value++;
			}
		}
		else//i가 홀수인 경우라면 반대로 값이 증가하도록 설정
		{
			for (int j = 2; j >= 0; j--)
			{

				value3[j][i] = value++;
			}
		}
	}

	//출력
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", value3[i][j]);
		}
		printf("\n");
	}

	//도전 과제 1 난이도 하
	// 1 2 3
	// 6 5 4
	// 7 8 9

	int value4[3][3]; //3 x 3 의 형태의 2차원 배열 선언
	int value = 1;

	for (int i = 0; i < 3; i++)
	{
		if (i % 2 == 0)
			for (int j = 0; j < 3; j++)
			{
				value4[i][j] = value++;
			}
		else
		{
			for (int j = 2; j >= 0; j--)
			{
				value4[i][j] = value++;
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", value4[i][j]);
		}
		printf("\n");
	}


	//도전 과제 3 난이도 상
	// 1 2 3
	// 8 9 4
	// 7 6 5
	int value5[3][3];
	value = 1;

	int top = 0;
	int bottom = 2;
	int left = 0;
	int right = 2;

	for (int arrays = 0; arrays < (sizeof(value5) / sizeof(int)) - 1; arrays++)

		// -> 방향 구현
		for (int i = left; i <= right; i++)
		{
			value5[top][i] = value++;
		}
	top++;

	//오른쪽 방향 구현

	for (int i = top; i <= bottom; i++)
	{
		value5[i][right] = value++;
	}
	right--;
	//아래 방향
	for (int i = right; i >= left; i++)
	{
		value5[bottom][i] = value++;
	}
	bottom--;

	// <-방향 구현
	for (int i = bottom; i <= top; i++)
	{
		value5[i][left] = value++;
	}
	left++;

//상급 문제 풀이 2
	int aData[3][3];
	int a = 0;
	int b = 0;
	int Count = 0;
	int MaxCount = 0;
	int Data = 0;
	int Add = 0;
	int Flag = 0;

	Data = 1; //수의 표현
	Count = 3; //3*3이므로 3으로 정의하고 시작
	MaxCount = (Count * 2) - 1; //Count는 i가 홀수냐 짝수냐에 따라 줄고 j는 그를 넘을 수 없음
	Add = 1; //행과 열의 증감
	a = -1; //열
	for (int i = 0; i < MaxCount; i++)
	{
		Count -= i % 2;
		for (int j = 0; j < Count; j++)
		{
			if (Flag == 0)
			{
				a += Add; //열의 증가
			}
			else
			{
				b += Add; //행의 증감
			}
			aData[b][a] = Data++;
		}
		Flag++;

		if (Flag == 2)
		{
			Flag = 0;
			Add *= -1;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", aData[i][j]);
		}
		printf("\n");
	}
	return 0;
}

```

# 8. 포인터

```c

#include <stdio.h>

//C언어 Pointer(포인터)
//메모리의 주소 값을 저장하는 변수

//포인터의 용도?
//어떤 변수의 주소를 가리키는 역할
//새로 만드는 게 아닌, 기존의 값을 활용해 가리키고 있는 곳의 변수를
//수정하는 것이 가능합니다.


//해당 개념에 대한 사용 목적
//>> 임베디드 프로그래밍 관련 작업 시 많이 활용됩니다.
//1. 다양한 형태의 변수들의 접근과 조작이 쉬워집니다.
//2. 더 효율적으로 프로그램 작성이 가능해집니다.
//3. 컴퓨터의 동작 방식에 대한 이해도가 높아집니다.

//임베디드 프로그래밍(Embedded Programming)
//하드웨어 기반의 특정 기능 제어(임베디드 시스템)를 진행하는 프로그래밍
//ex) 자동차, 냉장고, 스마트 워치 등의 기능 담당 하드웨어를 제어하는
//소프트웨어에 대한 제작

int main()
{
	int value = 100;
	int* ptr_value = &value;
	//1. *(asterisk) : 숫자 * 숫자로 쓰일 경우에는 곱하기 기호로 사용
	//				   자료형*로 쓰이는 경우는 주소를 값으로 바꿔주는 기능( 주소 -> 값)
	//				   포인터에 대한 표현으로 사용합니다.

	//2. &(ampersand) : 값 & 값으로 쓰일 경우에는 해당 값에 대한 비트 AND 연산을 진행하는 기호
	//					조건식 && 조건식으로 쓰일 경우에는 조건식 AND 연산을 진행하는 기호
	//					&변수명으로 쓰일 경우에는 해당 값을 주소로 바꿔주는 기능(변수 -> 주소)

	printf("value 의 값 %d\n", value); //변수의 값은 그대로 표현
	printf("value 의 wnth %p\n", &value); //변수의 주소 표현 시 & 사용
	printf("ptr_value 의 값 %d\n", *ptr_value); //포인터의 변수의 값 표현을 위해 * 사용
	printf("ptr_value 의 wnth %p\n", ptr_value); //포인터는 주소기이기 때문에 때문에 그대로 표현

	value = 5;

	printf("value 의 값 %d\n", value);
	printf("value 의 wnth %p\n", &value);
	printf("ptr_value 의 값 %d\n", *ptr_value);
	printf("ptr_value 의 wnth %p\n", ptr_value);

	*ptr_value = 6;

	printf("value 의 값 %d\n", value);
	printf("value 의 wnth %p\n", &value);
	printf("ptr_value 의 값 %d\n", *ptr_value);
	printf("ptr_value 의 wnth %p\n", ptr_value);

	*ptr_value = 7;

	printf("value 의 값 %d\n", value);
	printf("value 의 wnth %p\n", &value);
	printf("ptr_value 의 값 %d\n", *ptr_value);
	printf("ptr_value 의 wnth %p\n", ptr_value);

	return 0;
}
```
# 9. 함수

```c

#include <stdio.h>
//c언어 함수
//C언어 프로그램의 실행 단위를 의미합니다.
//1. main()은 C언어에서 프로그램 실행 시 처음 실행되도록 설정된 함수입니다.
//2. 함수는 특정 하나의 기능을 수행하는 코드를 묶어서 하나의 명령어처럼 사용합니다.
//3. 사용자는 C언어에서 제공해 주는 함수 이외에 사용자 정의 함수를 정의, 구현할 수 있습니다.
//4. #include를 통해 라이브러리에서 제공해주는 헤더 파일을 코드에 연결해야 쓸 수 있는 라이브러리 함수가 존재합니다.

//함수 만드는 방법
//반환타입 함수명(매개변수)
//{
//  함수를 호출했을 때, 실행할 명령문;
//}

//1. 반환 타입의 경우 해당 함수를 실행한 뒤 넘겨줄 결과 값의 형태를 표시합니다.
//2. 반환 타입에 따라 함수에서는 return을 통해 값을 전달해줘야 합니다.
//3. 매개변수는 함수가 필요한 입력 값을 받기 위해 정의해주는 변수입니다. 외부로부터 전달받은 값을 함수 내부의 값으로써 사용하게 해주며
// 함수의 사용이 종료되면 매개변수도 삭제됩니다.
//4. return 코드를 실행하면, 함수가 종료됩니다. 추가적으로 return 다음에 값이 작성되어있는 경우 함수를 호출한 위치에 그 값을 전달합니다.

int add(int a, int b) //매개변수는 a, b
{
	int result = a + b;
	return result; //add 함수의 결과물
}

int sub(int a, int b) //매개변수는 a, b
{
	return a - b; //간단한 계산 결과라면 return을 통해 한번에 작성하는 게 위의 방식보다 읽기가 편합니다.
}



int main()
{
	int c = add(2, 7);
	//1. add(2.7) 호출
	//2. 매개변수에 값 전달 a = 2, b = 7
	// 인자(Argument)는 매개변수처럼 함수에서 값을 전달하는 과정과 관련된 용어입니다.
	//매개변수가 외부에서 받을 값에 대한 표현이라면, 인자의 경우는 함수 호출 시 실제로 전달되는 값
	
	//3. 내부의 식 실행 result = 2 + 7;
	//return에 의해 함수 종료, return 다음에 적힌 값을 함수의 호출 위치에 전달
	//5. int c = 9;

	int d = sub(10, 5);

	printf("%d %d", c, d);

	return 0;
}
```
## 9-1 void 함수

```c
#include <stdio.h>

//void 함수
//반환 타입이 void 형태인 함수를 의미합니다.
//이 함수는 따로 return 값을 가지지 않습니다.

void sample()
{
	printf("Hello\n");
}
void add(int a, int b)
{
	int result = a + b;
	printf("result = %d\n", result);
}

//매개변수로 정수형 변수를 가지는 함수
void setAValue(int a, int value)
{
	a = value;
}

//매개변수로 정수 포인터 변수를 가지는 함수
void setAValue2(int *a, int value)
{
	*a = value;
}

int main()
{
	sample();
	add(1, 5);

	int a = 7;
	setAValue(a, 10);
	//1. 인자 값 (a : 7), 10을 setAvalue에 전달합니다.
	//2. 매개변수 a에 인자값(a)의 값을 적용합니다. value에는 10을 적용합니다.
	//3. a에 value의 값을 적용합니다.
	//4. 함수가 종료되면 매개변수 a의 값은 삭제됩니다.

	printf("a = %d\n", a);
	//바꾼 건 인자 값(a)가 아닌 함수 내부의 값(매개변수) a이기 때문에 변화가 없습니다.

	setAValue2(&a, 10); //매개변수가 int*이니 인자는 해당 형태가 받을 수 있는 주소의 형태로 받아야 합니다.
	//1. 인자 값(a의 주소와 10)을 함수에 전달합니다.
	//2. 매개변수 a에는 a의 주소가, value에는 10이 적용됩니다.
	//3. a에 value의 값을 적용합니다.
	//4. 함수가 종료되면 매개변수 a의 값은 삭제됩니다.

	//단 a는 인자 값(a)의 주소를 가지고 있기 때문에, 값을 수정할 경우 실제 위치에 적용이 됩니다.
	//내부에서 a가 삭제되더라도, 값 자체의 수정은 적용이 됩니다.

	//결론) 1. 값으로 전달을 할 경우는 내부에서 값을 수정해도, 원본의 값은 변경되지 않습니다.(call by value)
	//		2. 주소로 전달을 할 경우에는 내부에서 수정하면, 실제 위치의 값도 수정이 됩니다.(call by reference)
	printf("a = %d\n", a);

	return 0;
}
```

## 9-2. 가변인자

```c
#include <stdio.h>
#include <stdarg.h>
//함수가 정해지지 않은 개수의 인자 값을 받을 경우 사용하는 코드(가변인자)

//C언어에서 가변인자 사용하는 방법
//1. #include <stdarg.h>를 코드에 추가합니다.
//2. 함수의 매개변수에 ...이 가변인자입니다.
//3. 가변 인자의 경우는 전달받은 값을 알 수가 없습니다. 그래서 처음에 받는 값은 보통 받은 값의 개수를
//	 알 수 있는 데이터를 전달해줍니다.
//4. va_list는 전달받은 가변인자를 저장할 데이터입니다.
//5. va_start(args, count)는 가변 인자에 대한 처리를 진행합니다.
//6. va_arg(args, 자료형)은 args로부터 하나의 값을 가져오고 그 값을 자료형으로 명시합니다.
//7. va_end(args) : 가변인자에 대한 처리를 종료하고 기능을 제거합니다.(제거 안하면 프로그램에 데이터 남음 필수로 제거)

void printNumbers(int count, ...)
{
	va_list args;
	//전달받은 값을 묶음으로 저장합니다.
	va_start(args, count);
	//목록으로부터, count까지의 작업을 수행합니다.

	for (int i = 0; i < count; i++)
	{
		printf("%d ", va_arg(args, int));
		//va_arg(묶음 이름, 자료형)를 통해
		//묶음에 있는 자료형 데이터의 값을 받아옵니다.
	}
	printf("\n");
	va_end(args); //작업 완료
}

int main()
{
	printNumbers(5, 10, 20, 30, 40, 50);
	printNumbers(3, 5, 6, 7);

	return 0;
}
```

## 9-3. 함수 예시 문제 1
```c
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
```
# 10. 포인터와 함수
```c
#include <stdio.h>

//포인터와 함수를 사용하는 방법
//1. Call by reference
//return을 쓰지 않고, 함수 작업 내에서 실제의 값의 변경을 진행할 수 있습니다.
//1. 매개변수로 포인터를 활용하는 경우

void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//2. 매개변수로 포인터를 활용하는 경우(배열 포인터)(1차원 배열)
void printArray(int* p, int size) //배열은 매개변수로 받을 경우, 길이를 따로 전달해줘야 합니다.
{
	for (int i = 0; i < size; i++)
	{
		printf("%d", *(p + 1));
		//*(포인터 변수명 + 숫자)는 현재 포인터 기준으로 숫자만큼의 간격을 이동한 위치를 표현
	}
	printf("\n");
}
//3. 배열 포인터(2차원 배열)
//	자료형 (*포인터변수명)[가로열의 길이]
//	2차원 배열이기 때문에, 열과 행에 대한 크기를 각각 전달해줘야 합니다.
void print2Array(int(*p)[3], int size1, int size2)
{
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			printf("%d", p[i][j]);
		}
			printf("\n");
	}
	printf("\n");
}

//4. 함수 포인터(함수의 이름을 전달해서, 그 기능을 사용할 수 있습니다.
//	이때 포인터는 함수의 반환 형태와 동일하게 잡아줍니다.
//	장점: 하나의 이름으로 함수를 돌려쓰는 것이 가능합니다.

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}


int main()
{
	int a = 10;
	int b = 7;
	Swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);

	int iarray[] = { 1,2,3,4,5 };
	printArray(iarray, 5); //배열에 대한 전달 시 , 배열의 

	int iarray2[2][3] = { {1,2,3} , {4,5,6} };
	print2Array(iarray2, 2, 3);

	//함수 포인터 선언
	//자료형 (*포인터명)(매개변수 데이터 형태)

	//NULL 포인터: 현재 따로 가리키는 값이 없는 경우 써주는 값
	//포인터는 값이 있든 없든 그 위치를 가리키기 때문에, 지정을 안 해주면 잘못된 값을 접근할 위험이 있음,
	int (*ptr)(int, int) = NULL;

	ptr = add; //함수의 이름 ==함수의 주소이므로, 이름을 전달해주면 ptr에 함수 add의 위치가 전달됩니다.
	printf("%d + %d %d\n", a, b, ptr(a, b)); //ptr을 함수처럼 사용하면, add가 호출됩니다.

	ptr = sub;
	printf("%d - %d %d\n", a, b, ptr(a, b));
	
	return 0;
}
```

# 11. 함수 포인터를 이용한 콜백 함수

```c

#include <stdio.h>

//콜백 함수(callback)은 다른 코드의 인수로 넘겨주는 실행 가능한 코드를 의미합니다.
//콜백으로 넘겨받은 코드는 설계에 따라 즉시 실행하거나, 나중에 실행하는 게 가능합니다.
//특정 이벤트가 발생했을 때, 사용자가 원하는 기능을 수행하도록 하기 위한 용도로 설계합니다.

//콜백 함수를 만드는 방법
//1. 콜백 함수에 대한 정의
//typedef는 자료형 대신 지어준 이름으로, 대신 표현할 수 있게 도와주는 기능입니다.
typedef void (*callback)(void);

//2. 콜백 함수에 대한 설정을 진행할 함수 정의
void setCallback(callback);
//3. 콜백 함수에 대한 사용을 진행할 함수 정의
void useCallback(void);
//4. 사용자가 쓸 함수에 대한 정의
void useFunction(void);

//5. 콜백에 대한 전역 변수 선언
callback user_callback = NULL;

void setCallback(callback fp)
{
	user_callback = fp;
}

void useCallback(void)
{	
	//user_callback에 값이 설정되어있다면
	if (user_callback)
	{
		//콜백 함수를 실햅합니다.
		user_callback();
	}
	else
	{
		//아닌 경우라면 메시지만 전달합니다.
		printf("None Callback");
	}
}

void useFunction(void)
{
	printf("callback function completed");
}

int main()
{
	printf("콜백 함수 설정 전 호출 진행\n");
	useCallback();

	//콜백 함수 설정(함수 포인터)
	setcallback(useFunction);

	printf("콜백 함수 설정 전 호출 진행\n");
	useCallback();

//6. 아래에 함수 구현
	void setCallback(callback fp)
	{
		user_callback = fp;
	}

	return 0;
}

void useCallback(void)
{
	//user_callback에 값이 설정되어있다면
	if (user_callback)
	{
		//콜백 함수를 실햅합니다.
		user_callback();
	}
	else
	{
		//아닌 경우라면 메시지만 전달합니다.
		printf("None Callback");
	}
}
```
