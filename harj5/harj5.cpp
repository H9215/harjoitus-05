//jesse väänänen
//IIA14SA
#include <iostream>
using namespace std;
void main()
{
	int num1;
	int num2;
	cout << "syötä ensimmäinen luku : ";
	cin >> num1;
	cout << "syötä toinen luku : ";
	cin >> num2;

	if (num1 == num2)
		cout << "BINGO!\n\n";
	else
		cout << "BONGO!\n\n";
}