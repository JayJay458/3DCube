#include "Screen.h"
#include <string>
#include <iostream>
#include <Windows.h>

using namespace std;

void showCube(int size) {
	string line=string(size,'c');
	for (int i = 0; i < size; i++) {
		cout << line<<'\n';
	}
}

void refreshScreen() {
	system("CLS");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD curseCord = { 0,0 };
	SetConsoleCursorPosition(hConsole, curseCord);
}