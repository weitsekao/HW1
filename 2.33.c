#include <stdio.h>

int main() {
	double milesDriven;  // �C�Ѿr�p���^����
	double costPerGallon;  // �C�[�ڨT�o������
	double milesPerGallon;  // �C�[�ڨT�o���^����
	double parkingCost;  // �����O��
	double tolls;  // �L���O
	double dailyCost;  // �C�Ѫ��O��

	printf("�п�J�C�Ѿr�p���^���ơG");
	scanf_s("%lf", &milesDriven);

	printf("�п�J�C�[�ڨT�o�������G");
	scanf_s("%lf", &costPerGallon);

	printf("�п�J�C�[�ڨT�o���^���ơG");
	scanf_s("%lf", &milesPerGallon);

	printf("�п�J�����O�ΡG");
	scanf_s("%lf", &parkingCost);

	printf("�п�J�L���O�G");
	scanf_s("%lf", &tolls);

	// �p��C�Ѫ��O��
	dailyCost = (milesDriven / milesPerGallon) * costPerGallon + parkingCost + tolls;

	printf("�C�Ѷ}���W�Z���O�άO�G%.2lf\n", dailyCost);

	return 0;
}