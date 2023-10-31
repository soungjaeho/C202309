#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // �� �� ����� �����ϱ� ���� 2���� �迭
int taskCount = 0; // �� ���� ���� �����ִ� ����(10�޼��� ����)


void addTask(char tasks[]) {
	printf("�� ���� �Է��ϼ��� (���� ���� �Է��ϼ���): ");
	scanf_s("%s", tasks, (int)sizeof(tasks));
	// ������ �Է¹ޱ�
	printf("�� �� ""%s""�� ����Ǿ����ϴ�\n\n", tasks);
}

void delTask(int delIndex, int taskCount) {
	printf("%d. %s : �� ���� �����մϴ�.\n", delIndex, tasks[delIndex - 1]);
	// �Է¹��� �迭�� ���� ���� ���(�����Ϸ��� ��)
	strcpy_s(tasks[delIndex - 1], sizeof(tasks[delIndex - 1]), "");
	// ���ڿ� ���� �Լ��� ����(�Է¹��� ��ġ�� ""�� ���� )
	for (int i = delIndex; i < taskCount + 1; i++) {
		strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
		//�� �� ������ ���ʿ��� ���� ��ĭ�� ���ܿ���
	}
}

void printfTask(int taskCount) {
	for (int i = 0; i < taskCount; i++) {
		printf("%d. %s \n", i + 1, tasks[i]);
	// �� ���� ���ʴ�� ���(�־��� �� ���� ���� ��ŭ �ݺ�)
	}
	printf("\n");
}

int main() {

	printf("TODO ����Ʈ ����! \n");

	while (1) {
		int choice = -1; // ����� �Է� �޴��� �����ϱ� ���� ���� -> �������� -1�� ���� ������ ���߿� ���� Ȯ�ΰ���

		printf("------------------\n");
		printf("�޴��� �Է����ּ���.\n");;
		printf("1. �� �� �߰�\n2. �� �� ����\n3. ��� ����\n4. ����\n5.�� �� ����\n");
		printf("���� �� �� �� = %d\n", taskCount);
		printf("------------------\n");
		//���� ȭ�� ���
		scanf_s("%d", &choice);
		//���� ȭ�鿡�� ������ �Է� �ޱ�
		int terminate = 0; // ���Ḧ ���� flag -> �ش� ������ Ȱ���Ͽ� �����ϱ� ����
		int delIndex = -1;  // �� �� ������ ���� index ���� ���� -> 0���� �ε� -1�� �ʱ�ȭ���ѳ��� ����: ���� �۵�Ȯ�� �ϱ� ����
		int changeIndex = -1; // �� �� ������ ���� index ���� ���� -> ���� ������ ����
		char ch; // �� �� ������ ���۸� �ޱ� ���� ���� ����
		// �Է¿� ���� ��� ����
		switch (choice) {
		case 1:
			addTask(tasks[taskCount]);
			// �Լ� ����
			taskCount++;
			//�� �� �߰��̹Ƿ� �� �� ���� 1 ����
			break;
		case 2:
			// �� �� �����ϴ� �ڵ� ��� 
			printf("������ �� ���� ��ȣ�� �Է����ּ���. (1���� ����):");
			scanf_s("%d", &delIndex);
			// �����Ϸ��� �� ��(�ε���)�� ��ȣ�� �Է¹���
			if (delIndex > taskCount || delIndex <= 0) {
				printf("���� ������ ������ϴ�.\n");
				//�Է� ���� ���� -> ���� �� �Է� ����
			}
			else {
				delTask(delIndex, taskCount);
				// �Լ� ����
				taskCount -= 1;
				// �� ���� ���� �Ͽ����ϱ� �� �� ���� ����
			}
			break;
		case 3:
			printf("�� �� ���\n");
			printfTask(taskCount);
			// �Լ� ����
			break;
		case 4:
			terminate = 1;
			break;
			// ���� ����

		case 5:
			printf(" �����Ϸ��� �� ���� ��ȣ�� �Է����ּ���. (1���� ����) : ");
			ch = getchar();
			// ���� ����
			scanf_s("%d", &changeIndex);
			// �����Ϸ��� �� �Է¹���
			if (changeIndex > taskCount || changeIndex <= 0) {
				printf("ó������ �ٽ� �������ּ���");
				// ���� �� �Է� ����
			}
			else {
				printf("%d: �� ���� �����մϴ�.\n ", changeIndex);
				strcpy_s(tasks[changeIndex - 1], sizeof(tasks[changeIndex - 1]), " ");
				// ���� �Լ��� ����
				printf("���� ������ �Է����ּ���.\n");
				ch = getchar();
				scanf_s("%s", tasks[changeIndex - 1], (int)sizeof(tasks[changeIndex - 1]));
				// ����ִ� ���� �Է¹��� �� ����
			}
			// �� �� �����Է� �ε��� �Է¹ޱ�(1~10�Է��� ���� -> ���� �ε��� = �Է� ���� �ε��� -1 )
		default:
			printf("�߸��� �����Դϴ�. �ٽ� �����ϼ���.\n");
		}

		if (terminate == 1) {
			printf("���Ḧ �����ϼ̽��ϴ�. ���α׷��� �����մϴ�.\n");
			//���� ���ý� ���α׷� ����
			break;
		}
		if (taskCount == 10) {
			printf("������ �� á���ϴ�. ���α׷��� �����մϴ�.\n");
			//�� ���� ���� 10�޼��� ���α׷� ����
			break;
		}

	}
}
