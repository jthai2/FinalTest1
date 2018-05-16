//Storyline Rough Draft

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string choice;

	cout << "You have recieved a task from the King, would you like to accept or reject?\n[accept] \n[reject] " << endl;
	cin >> choice;

	if (choice == "accept")
	{
		cout << "You have accepted the task!" << endl;
	}
	else if (choice == "reject")
	{
		cout << "You have rejected the task!" << endl;
	}

	system("pause");
	return 0;

}