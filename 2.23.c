#include <stdio.h>

int main() {
	int num1, num2, num3;

	printf("�п�J�T�Ӿ�ơG\n");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	int max, min;

	// �����A���]�Ĥ@�ӼƬO�̤j�M�̤p��
	max = min = num1;

	// �M��A����ĤG�ӼƩM�ĤT�ӼơA��smax�Mmin
	if (num2 > max) {
		max = num2;
	}
	if (num2 < min) {
		min = num2;
	}
	if (num3 > max) {
		max = num3;
	}
	if (num3 < min) {
		min = num3;
	}

	printf("�̤j��ƬO�G%d\n", max);
	printf("�̤p��ƬO�G%d\n", min);

	return 0;
}