#include <tchar.h>
#include <conio.h>
#include <process.h>
#include <dos.h>
#include <iostream>
#include <windows.h>

using namespace std;

void SetTextXY(int x, int y, char *buf, int timestoBlink, int delayMilliSecs)
{
	::system("cls");
	//COORD ord;
//	ord.X = x;
	//ord.Y = y;

	int len = strlen(buf);
	char *p = new char[len + 1];
	memset(p, 32, len);
	p[len] = '\0';

	for (int i = 0; i < timestoBlink; i++)
	{
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), ord);
		std::cout << p;
		::Sleep(300);
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), ord);
		std::cout << buf;
		::Sleep(delayMilliSecs);

	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	char buf[] = "Hi";

	SetTextXY(15, 1, buf, 5, 1000);

	return 0;
}