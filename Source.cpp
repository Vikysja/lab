// Lab_02.cpp

// < ������ ³����� >

// ����������� ������ � 2.1.

// ˳����� ��������.

// ������ 11

#include <iostream>
using namespace std;

int main()

{

	double x; // ������� ��������

	double z1; // ��������� ���������� 1-�� ������

	double z2; // ��������� ���������� 2-�� ������

	cout << "x = "; cin >> x;

	z1 = (1 - (2 * sin(x) * sin(x))) / (1 + sin(2 * x))
		;

	z2 = (1 - tan(x)) / (1 + tan(x))1;

	cout << endl;

	cout << "z1 = " << z1 << endl;

	cout << "z2 = " << z2 << endl;

	cin.get();

	return 0;
}

