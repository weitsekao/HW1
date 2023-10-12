#include <stdio.h>

int main() {
	double milesDriven;  // 每天駕駛的英里數
	double costPerGallon;  // 每加侖汽油的成本
	double milesPerGallon;  // 每加侖汽油的英里數
	double parkingCost;  // 停車費用
	double tolls;  // 過路費
	double dailyCost;  // 每天的費用

	printf("請輸入每天駕駛的英里數：");
	scanf_s("%lf", &milesDriven);

	printf("請輸入每加侖汽油的成本：");
	scanf_s("%lf", &costPerGallon);

	printf("請輸入每加侖汽油的英里數：");
	scanf_s("%lf", &milesPerGallon);

	printf("請輸入停車費用：");
	scanf_s("%lf", &parkingCost);

	printf("請輸入過路費：");
	scanf_s("%lf", &tolls);

	// 計算每天的費用
	dailyCost = (milesDriven / milesPerGallon) * costPerGallon + parkingCost + tolls;

	printf("每天開車上班的費用是：%.2lf\n", dailyCost);

	return 0;
}