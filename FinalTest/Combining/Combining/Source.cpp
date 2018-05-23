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
	Sleep(4500);
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
		cout << "The Kingdom of Makuria, like most Kingdoms, was quite peaceful. The King \nwas in good political standings with surrounding villages, the Kingdom \nwas wealthy, crime was very minimal, and most importantly the people were \nhappy.\n " << endl;
		system("pause");
		cout << "\nThis peace lasted for centuries... But... like most stories of Heroism,\nthis peace was inevitably disrupted.\n " << endl;
		system("pause");
		cout << "\nOne day, Monsters began to appear and started terrorizing the Kingdom. \nThe guard, through their centuries of peace, grew lazy and weak proving \nthat they were no match for these malevolent beasts. Many-a-folk died \nin the following years.\n" << endl;
		system("pause");
		cout << "\nThe King, reluctantly, was forced to shut the gates of Makuria in order to \nfind a solution to their problem. The entire city was cut off from the \noutside world. The vast fortune that was collected over the years was used \nto repair the continuous damage to their walls, nearly emptying their \ncoffers. The city was on high alert with many of the citizens barricaded \nin their homes hoping that they’d have enough rations to survive the week, \nand the vast amount of dormant criminals took advantage of this mass \nhysteria to perform their vicious acts.\n" << endl;
		system("pause");
		cout << "\nWith no salvation in sight, these were truly dark times \n" << endl;
		system("pause");

		system("cls");
		Sleep(1000);
		cout << "\n\n\n\n\n\n\n\n\n                               One Year Later," << endl;
		Sleep(1000);
		cout << "                          Where our story begins..." << endl;
		Sleep(2500);

		system("cls");
		Sleep(1000);
		cout << "We see a young man with dark black hair and basic brown clothing running \nthrough a narrow alleyway with two heavily armoured men in close pursuit. \nThe dark haired man is leaping over barrels while holding a large brown \nbag, and doing anything to evade his pursuers. At one point one of the \narmoured men yells after the man...\n" << endl;
		system("pause");
		cout << "\nGuard #1: You can't run forever Felix! We'll catch you eventually!!" << endl;
		cout << "Felix Smirks" << endl;
		cout << "Felix: You've been saying that for months, Anthony; when are you going to \ndeliver?\n" << endl;
		system("pause");

		cout << "\nAs soon as Felix finished his quip, he reached a cross section in the \nalleyway, and without skipping a beat, he turned right and, almost \nmechanically, he reached towards the nearby stack of crates and knocked \nthem over, blocking the alleyway. A few moments after the clanging of the \nguards armour stops at the crates, Felix smiles, turns, and begins to \ntrot down the muddy alleyway, leaving the cursing guards behind.\n" << endl;
		system("pause");
		cout << "\nA few moments later, Felix exits the alleyways onto the cobblestone main \nroad. The sun has just about to rise, casting a golden light onto the gray \nhousing of the kingdom, almost creating a facade that the city was in its \ngolden age of wealth and jubilation.\n" << endl;
		system("pause");
		cout << "\nFelix paid no mind to the empty streets that used to be cluttered with \nmerchants and people; in less than a minute, Felix walked towards a small \nwooden and stone shack that was dwarfed by the surrounding buildings. With \nthe brown bag clutched between his arms, Felix walks towards the buildings \ndoor and knocks. After a brief moment of silence the door opens, but only \nslightly, to reveal a skinny, short, gray haired, old man peering out into \nthe streets. \n" << endl;
		system("pause");
		cout << "\nAs soon as the man saw Felix, though, his eyes widened and he swung the \ndoor all the way open to usher Felix inside. As soon as Felix was inside \nthe old shack the man closed and locked the door, and as soon as he turned \naround Felix thrusted the bag into the man's arms. Felix retreated to the \nold wooden table, that was in the far left corner of the one room \nbuilding, where he plopped down into one of the many old looking chairs \nsurrounding it, where the man began to speak in a frantic raspy voice.\n" << endl;
		system("pause");

		cout << "\nOld Man Jenkins: OH!.. Uhh.. T-Thank you Felix..." << endl;
		cout << "At which point the man opens the sack to reveal an assortment of stale \nbread and old cheeses." << endl;
		cout << "Felix: Yea.. Don't mention it, Herold..\n" << endl;
		system("pause");

		cout << "\nFelix Leaned back in his chair and closed his eyes, leaving the room and \nthe man staring at the brown bag silent. After a brief pause, the man \nspoke, not looking away from the bag, in an almost timid fashion.\n" << endl;
		system("pause");
		Sleep(1000);
		cout << "\nOld Man Jenkins: So.. Uhh... where did you get them this time?..." << endl;
		Sleep(1000);
		cout << "\nFelix smirks with his eyes still closed" << endl;
		Sleep(1000);
		cout << "\nFelix: Heh.. Just a few greedy nobles on the other side of town who think they can hoard food while others starve.\n" << endl;
		system("pause");
		Sleep(1000);
		cout << "\nFelix opens his eyes and meets the gaze of the man now looking at him." << endl;
		Sleep(1000);
		cout << "\nFelix: You should of heard the tantrum they threw! They were \nscreaming and yelling at me telling me to bring the stuff back." << endl;
		Sleep(1000);
		cout << "\nFelix now looking even more amused and jumping out of his chair." << endl;
		Sleep(1000);
		cout << "\nFelix: They tried to chase me but the fat prick got winded easily!" << endl;
		Sleep(1000);
		cout << "\nHe lets out a slight laugh while the man stares at him stone eyed\n" << endl;
		system("pause");
		Sleep(1000);
		cout << "\nFelix: They even sent the guard after me! Seven of 'em I think! Chased me right across town, but I managed to lose them in the alleyw--" << endl;
		Sleep(1000);
		cout << "\nThe old man, now with a sudden new amount of courage, says" << endl;
		Sleep(1000);
		cout << "\nOld Man Jenkins: THAT'S ENOUGH!" << endl;
		Sleep(1000);
		cout << "\nFelix looks at him dumbfounded.\n" << endl;
		system("pause");
		Sleep(1000);
		cout << "\nOld Man Jenkins: You can't keep doing this Felix! Stealing food, in these times, are punishable by death, and yet you go out each and every night, breaking into people's homes, stealing from their pantries, and putting yourself into danger! I can’t take it, Felix, you have such a life to live and you waste it away doing " << endl;
		Sleep(1000);
		cout << "\nThe last words the old man says seems to eco inside of Felix’s mind for a time. Eventually, after a brief moment of silence replies" << endl;
		system("pause");
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