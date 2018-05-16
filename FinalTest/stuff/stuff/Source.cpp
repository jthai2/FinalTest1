#include <cwchar>
#include <windows.h>
#include <iostream>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	int c;

	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                   // Width of each character in the font
	cfi.dwFontSize.Y = 40;                  // Height
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	std::wcscpy(cfi.FaceName, L"Consolas"); // Choose your font
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

menu:
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	int sword = 0;
	int armor = 0;
	int healing = 0;
	int rope = 0;

	string choice;

	//color
	for (c = 11; c < 12; c++)
	{
		SetConsoleTextAttribute(hConsole, c);
		cout << "\nWhat would you like to do?" << endl;
		cout << "Input Answer: ";
		cin >> choice;

		SetConsoleTextAttribute(hConsole, c);
		if (choice == "menu")
		{
		option:
			cout << "\nYou have opened the menu option, what would you like to display? " << endl;
			Sleep(1000);
			cout << "\n	1. [inventory]" << endl;
			Sleep(1000);
			cout << "\n	2. [location]" << endl;
			Sleep(1000);
			cout << "\n	3. [details]" << endl;
			Sleep(1000);

			cout << "\nInput Answer: ";
			cin >> choice;

			if (choice == "inventory")
			{
				cout << "\n[Inventory]" << endl;
				cout << "Sword: " << sword << endl;
				cout << "Armor: " << armor << endl;
				cout << "Healing: " << healing << endl;
				cout << "Rope: " << rope << endl;

				goto menu;
			}
			else if (choice == "location")
			{
				cout << "\nWhere are you traveling?" << endl;
				Sleep(1000);
				cout << "\n	1. [forest]" << endl;
				Sleep(1000);
				cout << "\n	2. [exit]" << endl;
				Sleep(1000);

				cout << "Input Answer: ";
				cin >> choice;

				if (choice == "forest")
				{
					cout << "\nYou have entered the forest..." << endl;
					cout << "\nYou have encountered some enemies, would you like to" << endl;
					Sleep(1000);
					cout << "\n	1. [attack]" << endl;
					Sleep(1000);
					cout << "\n	2. [leave]" << endl;
					Sleep(1000);

					cout << "Input Answer: ";
					cin >> choice;

					if (choice == "attack")
					{
						system("color 4e");
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n                              You Have Died!\n\n\n\n\n\n\n\n\n";
						cout << "Press [enter] to exit";

						cin.ignore();

						cin.get();
						return 0;
					}
				}
				else if (choice == "exit")
				{
					return 0;
				}
			}
			else if (choice == "details")
			{
				cout << "\nYour category is a Wizard who is a High Elf!" << endl;

				goto menu;
			}
			else
			{
				cout << "\nThat is not a valid choice..." << endl;

				goto option;
			}
		}
		else
		{
			cout << "That is not a valid choice..." << endl;
			cin >> choice;

			goto menu;
		}
	}

	system("pause");
	return 0;
}