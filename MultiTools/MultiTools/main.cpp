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
		cout << "Выберете модуль 1-часы, 2-Калькулятор, 3-Расписание "; cin >> variant;
		switch (variant){
		case 1:watch();
			break;
		case 2: 
		getCalculator(); // калькулятор		
		break;
		case 3:
		Schedule(); // расписание
		break;
		default: cout << "Не правильный вариант";
			break;
		}
		cout << "Желаете продолжить? 1-да "; cin >> bol;
	}
	
}