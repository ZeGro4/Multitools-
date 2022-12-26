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
	cout << "Добро пожаловать в простейший калькулятор \n";
	cout << "Простейшие выражения: \n+ - прибавить 2 числа\n- - отнять 2 числа\n/ - деление 2 чисел \n* - умножение 2 чисел\n% - остаток деленния 2 чисел \n";
	cout << "Для выхода из программы напишите exit\n";
	while (exit == 1) {
		cout << "Введите выражение "; cin >> num1;
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