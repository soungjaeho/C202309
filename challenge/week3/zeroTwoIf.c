#include<stdio.h>

int main(void) {

	int num = 0;
	//���� ����
	printf("���ڸ� �Է��Ͻÿ�: \n");
	scanf_s("%d", &num);
	//�ȳ����� ����� �Է°� �Է�
	if (num == 0)
		printf("zero");
	//�Է°��� 0�ϰ�� �ش��ϴ� �� ���
	else if (num == 1)
		printf("one");
	//�Է°��� 1�ϰ�� �ش��ϴ� �� ���
	else if (num == 2)
		printf("two");
	//�Է°��� 2�ϰ�� �ش��ϴ� �� ���
	else
		printf("not 0~2");
	//�Է°��� 0~2�� �ƴҰ�� �����޽��� ���

	return 0;
}