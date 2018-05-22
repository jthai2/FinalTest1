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
	int c;
	
top:
	//welcoming screen + instructions
	cout << "\n\n\n                           Kingdom Harbinger!" << endl;
	cout << "                   .-                                        _,-. " << endl;
	cout << "	    ______/C_________________________________,.--v/^^ ,/       " << endl;
	cout << "	 ,n#|##|#}{------------------------------ - - - ___-^          " << endl;
	cout << "	,,,```````|/,-,,,^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^               " << endl;
	cout << "                 c/,                                              " << endl;
	Sleep(6000);
	cout << "      	                      " << arrowRight << " [start]" << endl;
	Sleep(1000);
	cout << "\n	                      " << arrowRight << " [info]" << endl;
	Sleep(1000);
	cout << "\n	                      " << arrowRight << " [exit]" << endl;
	Sleep(1000);

	cout << "\n\n\n\n\nInput Answer: ";
	cin >> choice;

	if (choice == "start")
	{
		system("cls");
		cout << "The Kingdom of Makuria, like most Kingdoms, was quite peaceful. The ";
		for (c = 8; c < 9; c++)
		{
			SetConsoleTextAttribute(hConsole, c);
			cout << "King";
		}
		for (c = 7; c < 8; c++)
		{
			SetConsoleTextAttribute(hConsole, c);
			cout << " \nwas in good political standings with surrounding villages, the Kingdom \nwas wealthy, crime was very minimal, and most importantly the people were \nhappy. " << endl;
			system("pause");
			cout << "\nThis peace lasted for centuries... But... like most stories of ";
			for (c = 6; c < 7; c++)
			{
				SetConsoleTextAttribute(hConsole, c);
				cout << "Heroism";
			}
			for (c = 7; c < 8; c++)
			{
				SetConsoleTextAttribute(hConsole, c);
				cout << ", \nthis peace was inevitably disrupted. " << endl;
			}
			system("pause");

			cout << "\nOne day ";
			for (c = 4; c < 5; c++)
			{
				SetConsoleTextAttribute(hConsole, c);
				cout << "Monsters";
			}
			for (c = 7; c < 8; c++)
			{
				SetConsoleTextAttribute(hConsole, c);
				cout << " began to appear and started terrorizing the Kingdom. \nThe guard, through their centuries of peace, grew lazy and weak proving \nthat they were no match for these malevolent beasts. Many-a-folk died \nin the following years.";
			}
			//system("pause");
		}
	}
	else if (choice == "info")
	{
		system("cls");
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
		system("cls");
		goto top;
	}

	system("pause");
}