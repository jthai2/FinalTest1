#include <cwchar>
#include <windows.h>
#include <iostream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                   // Width of each character in the font
	cfi.dwFontSize.Y = 40;                  // Height
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	//welcoming screen + instructions
	cout << "\n\n\n\n\n\n\n\n\n                     Welcome to Kingdom Harbinger!\n\n\n" << endl;
	Sleep(5000);
	cout << "\n\n\n\n\n\nThis is a text based story where you'll be traveling along as a wizard." << endl;
	Sleep(2500);
	cout << "Your objective is to complete multiple stages and tasks which will lead \nyou to the end." << endl;
	Sleep(3000);
	cout << "You may survive and also die, different choices lead you into choosing if \nyou're going to be a good, bad, or neutral character." << endl;
	Sleep(3500);
	cout << "Good Luck!" << endl;
	Sleep(2500);
	cout << "\nTransitioning to starting screen..." << endl;
	Sleep(1500);
	cout << "3" << endl;
	Sleep(1200);
	cout << "2" << endl;
	Sleep(1200);
	cout << "1" << endl;
	Sleep(1200);

	system("color 4e");
	cout << "You have entered the palace and the King approaches you...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;


	system("pause");
}