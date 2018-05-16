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
			cout << "\n	1. [shop]" << endl;
			Sleep(1000);
			cout << "\n	2. [location]" << endl;
			Sleep(1000);
			cout << "\n	3. [details]" << endl;
			Sleep(1000);

			cout << "\nInput Answer: ";
			cin >> choice;

			if (choice == "shop")
			{
				int inventory[] = { 00, 00, 00 };		//Calls variables
				int gold = 100;
				int itemBuy = 0;
				int rope = 25;
				int ropeID = 01;
				int potion = 15;
				int potionID = 02;
				int sword = 75;
				int swordID = 03;

				do{
					cout << "+=-------SHOP-------=+" << endl;	//Displays Shop
					cout << "| 1 --- Rope --- 25g |" << endl;
					cout << "| 2 -- Potion -- 15g |" << endl;
					cout << "| 3 --- Sword -- 75g |" << endl;
					cout << "+=------------------=+" << endl;
					cout << "Current Inventory :" << endl;	//Shows Current Inventory
					cout << "Gold:  " << gold << endl;
					for (int x = 0; x < 3; x++)
					{
						switch (inventory[x])
						{
						case 00:
							cout << "EMPTY" << endl;
							break;
						case 01:
							cout << "Rope -- 25g" << endl;
							break;
						case 02:
							cout << "Potion -- 15g" << endl;
							break;
						case 03:
							cout << "Sword -- 75g" << endl;
							break;
						default:
							break;
						}
					}

					cout << "What would you like to buy? (Press [9] for menu, -1 to exit) \n>";
					while (!(cin >> itemBuy))										//Makes sure the input is only a number
					{
						cout << "ERROR !! INVALID INPUT PLEASE TRY AGIAN!! \n>";
						cin.clear();												//User Input
						cin.ignore(100000, '\n');
					}
					if (itemBuy >= 1 && itemBuy <= 3)
					{
						switch (itemBuy)
						{
						case 1:									//If input is equal to 1 (Rope)
							if (gold >= rope)					//Checks for correct amount of gold
							{
								if (inventory[0] == 00)			//Checks inventory and subtracts gold if there is room for the item
								{
									inventory[0] = ropeID;
									gold = gold - rope;
								}
								else if (inventory[0] != 00 && inventory[1] == 00)
								{
									inventory[1] = ropeID;
									gold = gold - rope;
								}
								else if (inventory[0] != 00 && inventory[1] != 00 && inventory[2] == 00)
								{
									inventory[2] = ropeID;
									gold = gold - rope;
								}
								else
								{
									cout << "You do not have enough space" << endl;
								}
							}
							else
							{
								cout << "You do not have enough gold." << endl;
							}
							break;
						case 2:									//If Input is equal to 2 (Potion)
							if (gold >= potion)					//Checks to see if player has enough gold
							{
								if (inventory[0] == 00)			//Checks inventory for space and subtracts gold if there is room for the item
								{
									inventory[0] = potionID;
									gold = gold - potion;
								}
								else if (inventory[0] != 00 && inventory[1] == 00)
								{
									inventory[1] = potionID;
									gold = gold - potion;
								}
								else if (inventory[0] != 00 && inventory[1] != 00 && inventory[2] == 00)
								{
									inventory[2] = potionID;
									gold = gold - potion;
								}
								else
								{
									cout << "You do not have enough space" << endl;
								}
							}
							else
							{
								cout << "You do not have enough gold." << endl;
							}
							break;
						case 3:									//If input is equal to 3
							if (gold >= sword)
							{
								if (inventory[0] == 00)
								{
									inventory[0] = swordID;
									gold = gold - sword;
								}
								else if (inventory[0] != 00 && inventory[1] == 00)
								{
									inventory[1] = swordID;
									gold = gold - sword;
								}
								else if (inventory[0] != 00 && inventory[1] != 00 && inventory[2] == 00)
								{
									inventory[2] = swordID;
									gold = gold - sword;
								}
								else
								{
									cout << "You do not have enough space" << endl;
								}
							}
							else
							{
								cout << "You do not have enough gold." << endl;
							}
							break;
						default:
							break;
						}
					}
					else if (itemBuy == 9)
					{
						goto menu;
					}
					else if (itemBuy >= 4 || itemBuy <= -2 || itemBuy == 0)
					{
						cout << "\nERROR!! INVALID INPUT PLEASE TRY AGAIN\n" << endl;
					}
				} while (itemBuy != -1);

				//system("pause");
				return 0;
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