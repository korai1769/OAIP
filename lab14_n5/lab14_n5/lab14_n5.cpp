#include <iostream>
using namespace std;
//�������� �������. ���������
int NOD(int A, int B)
{
	while (A != B)
		if (A > B) A -= B;
		else B -= A;
	return A;
}
//������� �������
void main()
{
	setlocale(LC_ALL, "Rus");
	int A, B;
	cout << "A = "; cin >> A;
	cout << "B = "; cin >> B;
	cout << "���(" << A << ", " << B << ")=" << NOD(A, B);
	system("pause>>void");
}