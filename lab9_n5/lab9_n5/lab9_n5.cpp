#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int god, vek;
	printf("������� ����� ����:");
	scanf_s("%d", &god);
	vek = ((god - 1) / 100) + 1;
	printf("��� ��� ��������: %d", vek);
	return 0;
}
