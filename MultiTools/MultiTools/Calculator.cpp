#include <iostream>
#include <string>
#include "Header.h"
using namespace std;
void getCalculator() {
	setlocale(LC_CTYPE, "rus");
	string num1;
	string num2;
	string operation;
	int exit = 1;
	cout << "����� ���������� � ���������� ����������� \n";
	cout << "���������� ���������: \n+ - ��������� 2 �����\n- - ������ 2 �����\n/ - ������� 2 ����� \n* - ��������� 2 �����\n% - ������� �������� 2 ����� \n";
	cout << "��� ������ �� ��������� �������� exit\n";
	while (exit == 1) {
		cout << "������� ��������� "; cin >> num1;
		if (num1 == "exit") {
			break;
		}
		cin >> operation; cin >> num2;
		int number1 = stoi(num1);
		int number2 = stoi(num2);

		if (operation == "+") {
			cout << number1 << " " << operation << " " << number2 << " = " << number1 + number2 << endl;
		}
		else if (operation == "-") {
			cout << number1 << " " << operation << " " << number2 << " = " << number1 - number2 << endl;
		}
		if (operation == "*") {
			cout << number1 << " " << operation << " " << number2 << " = " << number1 * number2 << endl;
		}
		else if (operation == "/") {
			cout << number1 << " " << operation << " " << number2 << " = " << number1 / number2 << endl;
		}
		else if (operation == "%") {
			cout << number1 << " " << operation << " " << number2 << " = " << number1 % number2 << endl;
		}


	}
}