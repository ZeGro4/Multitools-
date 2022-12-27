#include "Header.h"
#include <iostream>
#include <Windows.h>
using namespace std;

#include <cstdlib>

void watch() {
	setlocale(LC_CTYPE, "Russian");
	int answer, e = 1;
	cout << "Желаете получить актуальное время? (Y/N)" << endl;
		cin >> answer;
		switch(answer){
		case 1:
	SYSTEMTIME getTime;
	while (true) {
		GetLocalTime(&getTime);
		if (getTime.wMinute < 10 && getTime.wSecond < 10) {
			cout << getTime.wHour << ":" << "0" << getTime.wMinute << ":" << "0" << getTime.wSecond;
		}
		else if (getTime.wMinute < 10 && getTime.wSecond > 10) {
			cout << getTime.wHour << ":" << "0" << getTime.wMinute << ":" << getTime.wSecond;
		}
		else if (getTime.wMinute > 10 && getTime.wSecond < 10) {
			cout << getTime.wHour << ":" << getTime.wMinute << ":" << "0" << getTime.wSecond;
		}
		else {
			cout << getTime.wHour << ":" << getTime.wMinute << ":" << getTime.wSecond;
		}
		Sleep(1000);
		system("cls");
	}
			break;
		case 2:
		
			cout << "С наступающим вас новым годом!!!" << endl;
			break;
		default:
		
			cout << "Ну как хотите(" << endl;
		}

}



