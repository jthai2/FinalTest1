#include <cwchar>
#include <windows.h>
#include <iostream>
#include <string>
#include <iostream>

int main()
{
	using namespace std;
	int c;

	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                   // Width of each character in the font
	cfi.dwFontSize.Y = 100;                  // Height
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

		system("color 4e");
		cout << "\n\n\n       You Have Died!";

		cin.ignore();
		return 0;
}

		