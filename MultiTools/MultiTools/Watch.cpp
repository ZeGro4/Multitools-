#include "Header.h"
#include <iostream>
#include <Windows.h>
using namespace std;

#include <cstdlib>

void watch() {
	setlocale(LC_CTYPE, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string ex;
		
	SYSTEMTIME getTime;
	while (true) {
		GetLocalTime(&getTime);
		if (getTime.wMinute < 10 && getTime.wSecond < 10) {
			cout << getTime.wHour << ":" << "0" << getTime.wMinute << ":" << "0" << getTime.wSecond;
			cout << "\n";
			cin >> ex;
			if (ex == "exit") {
				break;
			}
		}
		else if (getTime.wMinute < 10 && getTime.wSecond > 10) {
			cout << getTime.wHour << ":" << "0" << getTime.wMinute << ":" << getTime.wSecond;
			cout << "\n";
			cin >> ex;
			if (ex == "exit") {
				break;
			}
		}
		else if (getTime.wMinute > 10 && getTime.wSecond < 10) {
			cout << getTime.wHour << ":" << getTime.wMinute << ":" << "0" << getTime.wSecond;
			cout << "\n";
			cin >> ex;
			if (ex == "exit") {
				break;
			}
		}
		else {
			cout << getTime.wHour << ":" << getTime.wMinute << ":" << getTime.wSecond;
			cout << "\n";
			cin >> ex;
			if (ex == "exit") {
				break;
			}
		}
		Sleep(1000);
		system("cls");
	}

}



