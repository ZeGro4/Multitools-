#include "Header.h"
#include <iostream>
#include <Windows.h>
using namespace std;

#include <cstdlib>

void watch() {
	setlocale(LC_CTYPE, "Russian");
	SYSTEMTIME st;
	while (true) {
		GetLocalTime(&st);
		if (st.wMinute < 10 && st.wSecond < 10) {
			cout << st.wHour << ":" << "0" << st.wMinute << ":" << "0" << st.wSecond;
		}
		else if (st.wMinute < 10 && st.wSecond > 10) {
			cout << st.wHour << ":" << "0" << st.wMinute << ":" << st.wSecond;
		}
		else if (st.wMinute > 10 && st.wSecond < 10) {
			cout << st.wHour << ":" << st.wMinute << ":" << "0" << st.wSecond;
		}
		else {
			cout << st.wHour << ":" << st.wMinute << ":" << st.wSecond;
		}
		Sleep(1000);
		system("cls");

	}

}



