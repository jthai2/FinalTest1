#include <cwchar>
#include <windows.h>
#include <iostream>
#include <string>
#include <iostream>
#include <stdio.h>

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

	string choice;

	char arrowRight = 16;
	char arrowDown = 31;
	
	//welcoming screen + instructions
	cout << "\n\n\n\n\n\n\n\n\n                     Welcome to Kingdom Harbinger!\n\n\n" << endl;
	Sleep(6000);
top:
	
	system("cls");
	cout << arrowDown;
	cout << "\nWhat would you like to do?" << endl;
	Sleep(1000);
	cout << "\n	1. [start]" << endl;
	Sleep(1000);
	cout << "\n	2. [info]" << endl;
	Sleep(1000);
	cout << "\n	3. [exit]" << endl;
	Sleep(1000);

	cout << "\nInput Answer: ";
	cin >> choice;

	if (choice == "start")
	{
		system("color 0f");
		cout << "You have entered the palace and the King approaches you...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
	}
	else if (choice == "info")
	{
		Sleep(1350);
		cout << "\n	" << arrowRight << "This is a text based story where you'll be traveling along as \n	 a Rogue." << endl;
		Sleep(3500);
		cout << "\n	" << arrowRight << "Your objective is to complete multiple stages and tasks which \n	 will lead you to the end." << endl;
		Sleep(4000);
		cout << "\n	" << arrowRight << "You may survive and also die, different choices lead you into \n	 choosing if you're going to be a good, bad, or neutral character." << endl;
		Sleep(5000);

	startScreenChoice:
		cout << "\nWould you like to go back to the start screen?" << endl;
		Sleep(1000);
		cout << "\n	1. [yes]" << endl;
		Sleep(1000);
		cout << "\n	2. [exit]" << endl;
		Sleep(1000);

		cout << "\nInput Answer: ";
		cin >> choice;

		if (choice == "yes")
		{
			goto top;
		}
		else if (choice == "no")
		{
			return 0;
		}
		else
		{
			cout << "\nThat is not a valid choice" << endl;
			Sleep(500);
			cout << "Please try again...\n" << endl;

			goto startScreenChoice;
		}
	}
	else if (choice == "exit")
	{
		return 0;
	}
	else
	{
		cout << "\nThat is not a valid choice... " << endl;
		Sleep(500);
		cout << "Please try again...\n" << endl;

		goto top;
	}

	system("pause");
}