/*
100�� ������ ������ �Է¹޾�
ù �ٿ� ¦�� ���ڵ��� ������� ����ϰ�,
���� �ٿ� Ȧ�� ���ڵ��� ������� ����ϴ� ���α׷���
����� ������!

�Է� ��
7
3 1 3 1 5 9 2
��� ��
2
3 1 3 1 5 9
*/
#include <stdio.h>

int main() {

	int inputfirst = 0;
	int inputsecond = 0;
	int even[100], odd[100], evenCount=0,oddCount=0;
	
	scanf("%d", &inputfirst);


	for (int i = 0; i < inputfirst; i++) {
		scanf("%d", &inputsecond);
		if (inputsecond % 2 == 0) {
			even[evenCount] = inputsecond;
			evenCount++;
		}
		else {
			odd[oddCount] = inputsecond;
			oddCount++;
		}
	}
	for (int i = 0; i < evenCount; i++) {
		printf("%d ", *(even + i));
	}
	printf("\n");
	for (int i = 0; i < oddCount; i++) {
		printf("%d ", *(odd + i));
	}
	return 0;
}