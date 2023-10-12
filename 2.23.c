#include <stdio.h>

int main() {
	int num1, num2, num3;

	printf("叫块俱计\n");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	int max, min;

	// 安砞材计琌程㎝程
	max = min = num1;

	// 礛ゑ耕材计㎝材计穝max㎝min
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

	printf("程俱计琌%d\n", max);
	printf("程俱计琌%d\n", min);

	return 0;
}