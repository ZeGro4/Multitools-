#include <iostream>
#include "Header.h"
#include <Windows.h>
#include <cstdlib>
#include <string>


using namespace std;
int main() {
	setlocale(LC_CTYPE, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int bol = 1;
	int variant = 0;
	while (bol == 1) {
		cout << "�������� ������ 1-����, 2-�����������, 3-���������� "; cin >> variant;
		switch (variant){
		case 1:watch();
			break;
		case 2: 
		getCalculator(); // �����������		
		break;
		case 3:
		Schedule(); // ����������
		break;
		default: cout << "�� ���������� �������";
			break;
		}
		cout << "������� ����������? 1-�� "; cin >> bol;
	}
	
}