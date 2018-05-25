#include <string>
#include <iostream>
#include <windows.h>
using namespace std;

int main() 
{

	string Text = "This Text should be display letter by letter like a typewriter \n Hi";

	for (int x = 0; x < Text.length(); x++) 
	{
		cout << Text[x];
		Sleep(100);
	}
}