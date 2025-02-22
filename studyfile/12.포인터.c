#include <stdio.h>

//C��� Pointer(������)
//�޸��� �ּ� ���� �����ϴ� ����

//�������� �뵵?
//� ������ �ּҸ� ����Ű�� ����
//���� ����� �� �ƴ�, ������ ���� Ȱ���� ����Ű�� �ִ� ���� ������
//�����ϴ� ���� �����մϴ�.


//�ش� ���信 ���� ��� ����
//>> �Ӻ���� ���α׷��� ���� �۾� �� ���� Ȱ��˴ϴ�.
//1. �پ��� ������ �������� ���ٰ� ������ �������ϴ�.
//2. �� ȿ�������� ���α׷� �ۼ��� ���������ϴ�.
//3. ��ǻ���� ���� ��Ŀ� ���� ���ص��� �������ϴ�.

//�Ӻ���� ���α׷���(Embedded Programming)
//�ϵ���� ����� Ư�� ��� ����(�Ӻ���� �ý���)�� �����ϴ� ���α׷���
//ex) �ڵ���, �����, ����Ʈ ��ġ ���� ��� ��� �ϵ��� �����ϴ�
//����Ʈ��� ���� ����

int main()
{
	int value = 100;
	int* ptr_value = &value;
	//1. *(asterisk) : ���� * ���ڷ� ���� ��쿡�� ���ϱ� ��ȣ�� ���
	//				   �ڷ���*�� ���̴� ���� �ּҸ� ������ �ٲ��ִ� ���( �ּ� -> ��)
	//				   �����Ϳ� ���� ǥ������ ����մϴ�.

	//2. &(ampersand) : �� & ������ ���� ��쿡�� �ش� ���� ���� ��Ʈ AND ������ �����ϴ� ��ȣ
	//					���ǽ� && ���ǽ����� ���� ��쿡�� ���ǽ� AND ������ �����ϴ� ��ȣ
	//					&���������� ���� ��쿡�� �ش� ���� �ּҷ� �ٲ��ִ� ���(���� -> �ּ�)

	printf("value �� �� %d\n", value); //������ ���� �״�� ǥ��
	printf("value �� wnth %p\n", &value); //������ �ּ� ǥ�� �� & ���
	printf("ptr_value �� �� %d\n", *ptr_value); //�������� ������ �� ǥ���� ���� * ���
	printf("ptr_value �� wnth %p\n", ptr_value); //�����ʹ� �ּұ��̱� ������ ������ �״�� ǥ��

	value = 5;

	printf("value �� �� %d\n", value);
	printf("value �� wnth %p\n", &value);
	printf("ptr_value �� �� %d\n", *ptr_value);
	printf("ptr_value �� wnth %p\n", ptr_value);

	*ptr_value = 6;

	printf("value �� �� %d\n", value);
	printf("value �� wnth %p\n", &value);
	printf("ptr_value �� �� %d\n", *ptr_value);
	printf("ptr_value �� wnth %p\n", ptr_value);

	*ptr_value = 7;

	printf("value �� �� %d\n", value);
	printf("value �� wnth %p\n", &value);
	printf("ptr_value �� �� %d\n", *ptr_value);
	printf("ptr_value �� wnth %p\n", ptr_value);

	return 0;
}